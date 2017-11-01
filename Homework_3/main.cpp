#include <iostream>
#include <algorithm>
#include <string>
#include "json.hpp"

using json = nlohmann::json;

json sv1 = R"(
           {
           "SV": [
           {"id": 1,
           "name": "E",
           "family name": "Nguyen Van",
           "grade": 6.0
           },
           {"id": 3,
           "name": "A",
           "family name": "Nguyen Thi",
           "grade": 9.5
           },
           {"id": 5,
           "name": "C",
           "family name": "Phung Thanh",
           "grade": 8.5
           }
           ]
           }
           )"_json;

json sv2 = R"(
           {
           "SV": [
           {"id": 2,
           "name": "D",
           "family name": "Nguyen Van",
           "grade": 8
           },
           {"id": 4,
           "name": "C",
           "family name": "Nguyen Thi",
           "grade": 5.5
           },
           {"id": 6,
           "name": "B",
           "family name": "Phung Thanh",
           "grade": 6.5
           }
           ]
           }
           )"_json;

struct Compare {
    inline bool operator () (const json& js1, const json& js2) {
        if(js1["name"]<js2["name"])
            return true;
        else if(js1["name"] > js2["name"])
            return false;
        else {
            if(js1["family name"] <= js2["family name"])
                return true;
            else
                return false;
        }
    }
};

int main()
{
    //Sort SV1
    json js_SV1 = sv1["SV"];
    std::sort(js_SV1.begin(),js_SV1.end(),Compare());
    sv1["SV"] = js_SV1;
    std::cout<<"After sort SV1: \n"<<sv1<<std::endl;

    //Sort SV2
    json js_SV2 = sv2["SV"];
    std::sort(js_SV2.begin(),js_SV2.end(),Compare());
    sv2["SV"] = js_SV2;
    std::cout<<"After sort SV2: \n"<<sv2<<std::endl;


    //Merge SV1 and SV2
    json j_merge = R"({})"_json;

    //Solution1: Merge and keep order
//    js_SV1.insert(js_SV1.end(), js_SV2.begin(), js_SV2.end());
//    j_merge["SV"] = js_SV1;

    //Solution2: Merge and sort
    json sv12;
    std::merge(js_SV1.begin(), js_SV1.end(), js_SV2.begin(), js_SV2.end(), std::back_inserter(sv12), Compare());
    j_merge["SV"] = sv12;
    std::cout << "Merge SV1 and SV2: \n"<< j_merge.dump() << std::endl;


    //Counting
    int g_num = 0;
    int k_num = 0;
    int tb_num = 0;
    for(auto& e : sv12) {
        if(e["grade"] >= 8.5)
            ++g_num;
        else if((e["grade"]>= 6.5)&&(e["grade"]<8.5))
            ++k_num;
        else if((e["grade"]>= 5.5)&&(e["grade"]<6.5))
            ++tb_num;
    }
    std::cout<<"So SV gioi:"<<g_num<<std::endl;
    std::cout<<"So SV kha:"<<k_num<<std::endl;
    std::cout<<"So SV trung binh:"<<tb_num<<std::endl;

    return 0;
}

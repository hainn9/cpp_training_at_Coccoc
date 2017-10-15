// Bài tập về nhà 13/10/2017
//
// Xét một biểu diễn hình chữ nhật gồm ba thuộc tính:
// 	- chiều dài, chiều rộng và đơn vị đo
//	- trong đó chiều dài, chiều rộng là các số thực lớn hơn 0,
// 		đơn vị đo có thể nhận các gía trị là cm, dm, và m. 
//		chiều dài và chiều rộng có cùng đơn vị đo.
//
// Hãy định nghĩa một lớp Rectangle theo mô tả hình chữ nhật đã cho và
// đảm bảo rằng:
//		1) đối tượng thuộc lớp Rectangle luôn ở trong trạng thái hợp lệ.
//		2) có thể so sánh hai hình chữ nhật theo diện tích.
//		3) sử dụng các ràng buộc CV (const-volatile) ở những nơi thích hợp.
// Sau đó hãy hoàn thiện hàm main theo cấu trúc sau để kiểm thử.
//
// Bài làm gửi vào bangoc@coccoc.com trước ngày 17/10
//


int main() {
	// Khởi tạo hình chữ nhật h1 kích thước là 30cm x 50cm
	// Khởi tạo hình chữ nhật h2 kích thước là 2 m x 3m
	if (h1 > h2) {
		std::cout << "H1 lớn hơn H2" << std::endl;
	} else if (h1 < h2) {
		std::cout << "H1 nhỏ hơn H2" << std::endl;
	} else {
		std::cout << "H1 bằng H2" << std::endl;
	}

	// Khởi tạo hình chữ nhật h3 kích thước là -10cm x 10 cm -> lỗi runtime
	// Thử thay đổi trực tiếp kích thước hình chữ nhật h1 -> lỗi biên dịch
}
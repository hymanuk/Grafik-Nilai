#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
	std::array <int,10> nilai;

	for(int i = 0; i < nilai.size(); i++) 
	{
		if(i == 0) {
			std::cout << "Jumlah siswa dengan nilai 0-9   : ";
			std::cin >> nilai[i];
		} else if(i == 9)
		{
			std::cout << "Jumlah siswa dengan nilai 100   : ";
			std::cin >> nilai[i];
		} else 
		{
			std::cout << "Jumlah siswa dengan nilai ";
			std::cout << (i*10) << "-" << (i*10)+9 << " : ";
			std::cin >> nilai[i]; 
		}
	}

	std::cout << "\n\n";

	for(int i = 0; i < nilai.size(); i++)
	{
		if(i == 0) {
			std::cout << "Jumlah siswa dengan nilai 0-9   : ";
		} else if(i == 9)
		{
			std::cout << "Jumlah siswa dengan nilai 100   : ";
		} else 
		{
			std::cout << "Jumlah siswa dengan nilai ";
			std::cout << (i*10) << "-" << (i*10)+9 << " : "; 
		}

		for(int j = 0; j < nilai[i]; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		
	}

	std::cin.get();
	return 0;
}

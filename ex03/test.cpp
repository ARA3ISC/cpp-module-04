// C++ program for the above approach
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;

public:
	// Function that sets the dimensions
	box() {}
	box(int length1)
	{
		length = length1;
	}

	box& operator=(const box& obj)
	{
		this->length = obj.length;
		return *this;
	}

	// Function to display the dimensions
	// of the Box object
	void show_data()
	{
		cout << " Length = " << length << endl;
	}
};

// Driver Code
int main()
{
	box B1(14);
	box B2;


	B1 = B1;

	// B1.show_data();

	return 0;
}

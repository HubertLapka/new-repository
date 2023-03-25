#include<vector>
#include <iostream>
#include<optional>
using namespace std;
class Implement
{
private:
	string size;
public:
	Implement SizeOf(string Newsize)
	{
		this->size = move(Newsize);
		return *this;
	}
	string CurrentSize()
	{
		return this->size;
	}
};
class Box
{
private:
	int number;
	optional<vector<Implement>> ourImplement;
public:
	void Numbering(int Newnumber)
	{
		this->number = move(Newnumber);
	}
	void UsingOf(const Implement& implement)
	{
		this->ourImplement->push_back(implement);
	}
	Implement PutIn()
	{
		Implement put = this->ourImplement->back();
		this->ourImplement->pop_back();
		return put;
	}
};




int main() {
	Box myBox;
	Implement hamer;
	Implement newHamer = hamer.SizeOf("8");
	myBox.UsingOf(newHamer);
	Implement hiddenImplement = myBox.PutIn();
	cout << hiddenImplement.CurrentSize();


	return 0;
}

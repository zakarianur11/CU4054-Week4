//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int age;
//	int totalPeople = 0;
//	double totalCost = 0.0;
//	const double under16Price = 2.50;
//	const double over65Price = 3.00;
//	const double regularPrice = 5.00;
//	const double discountRate = 0.20;
//
//	cout << "enter age (-1 to exit)" << endl;
//	cin >> age; 
//
//	while (age != -1)
//	{
//		if (age < 16)
//		{
//			totalCost = totalCost + under16Price;
//			totalPeople++;
//		}
//		else if (age > 65)
//		{
//			totalCost = totalCost + over65Price;
//			totalPeople++;
//		}
//		else
//		{
//			totalCost = totalCost + regularPrice;
//			totalPeople++;
//		
//		}
//		cin >> age;
//	}
//
//	if (totalPeople >= 6)
//	{
//		double discount = totalCost * discountRate;
//		totalCost = totalCost - discount;
//	}
//
//	cout << "group size:" << totalPeople << endl;
//	cout << "totalCost:" << totalCost << endl;
//}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
int starterBox;
cout << setw (65);
cout << "|**********************|\n";
cout << setw (65);
cout << "| Welcome To JAZZ Club |\n";
cout << setw (66);
cout << "|**********************|\n\n";
back:
cout << "Enter MMI CODE FOR JAZZ TO SEE PREPAID-OFFERS : ";
cin >> starterBox;
if(starterBox == 444)
{
		askUser:
	int offerCode;
	cout << "1. Top Offers\n";
	cout << "2. All in One Offers\n";
	cout << "3. Super 4G Data Offers\n";
	cout << "4. Super Social and SMS Offers\n";
	cout << "5. Make Your Own Offers\n";
	cout << "6. My Account\n";
	cout << "7. VAS\n";
	cout << "8. Jazztunes\n";
	cout << "9. Jazz on Whatsapp\n";
	cout << "10. Tax Certificate\n";

	cout << "Enter Offer Code : ";
	cin >> offerCode;
	if(offerCode == 1)
	{
	backTopOffer:
		int pkgchose;
	cout << "1. 1Hour 1GB @Rs.9\n";
	cout << "2. Day Offer @Rs.14\n";
	cout << "3. 7Day Social - WA,FB,IMO & YouTube 5GB @Rs.89\n";
	cout << "4. Weekly All Network @Rs.170\n";
	cout << "5. 7Day 24GB @Rs.275\n";
	cout << "6. Monthly Super Duper @Rs.621\n";
	cout << "7. 30Day 2GB @Rs.89\n";
	cout << "0. Back\n";
	cout << "Choose Your Package: ";
	cin >> pkgchose;
	if(pkgchose == 1)
	{
		string pkgactive;
		cout << "Do you want to Activate Package 1Hour 1GB @Rs.9\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 2)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Day Offer @Rs.14\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 3)
	{
			string pkgactive;
		cout << "Do you want to Activate Package 7Day Social - WA,FB,IMO & YouTube 5GB @Rs.89\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 4)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Weekly All Network @Rs.170\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 5)
	{
			string pkgactive;
		cout << "Do you want to Activate Package 7Day 24GB @Rs.275\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 6)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Monthly Super Duper @Rs.621\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 7)
	{
			string pkgactive;
		cout << "Do you want to Activate Package 30Day 2GB @Rs.89\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backTopOffer;
	}
	}
	else if(pkgchose == 0)
	{	
		goto askUser;
	}
	}
	else if(offerCode == 2)
	{
		allInOneOffer:
		int choice;
	cout << "1. Daily\n";
	cout << "2. Weekly\n";
	cout << "3. Monthly\n";
	cout << "0. Back\n";
	cout << "Enter Your Choice: ";
	cin >> choice;
	if(choice == 1)
	{
		backAiOfferd:
		int pkgchose;
	cout << "1. Friends Offer @Rs.7.99\n";
	cout << "2. Friend Plus Offer @Rs.8.99\n";
	cout << "3. Day Bundle @Rs.14\n";
	cout << "4. Super Offer @Rs.18\n";
	cout << "5. Super Plus Offer @Rs.28\n";
	cout << "0. Back\n";
	cout << "Choose Your Package: ";
	cin >> pkgchose;
	 if(pkgchose == 1)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Friends Offer @Rs.7.99\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferd;
	}
	}
	else if(pkgchose == 2)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Friend Plus Offer @Rs.8.99\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferd;
	}
	}
	else if(pkgchose == 3)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Day Bundle @Rs.14\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferd;
	}
	}
	else if(pkgchose == 4)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Super Offer @Rs.18\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferd;
	}
	}
	else if(pkgchose == 5)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Super Plus Offer @Rs.28\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferd;
	}
	}
	else if(pkgchose == 0)
	{
			goto allInOneOffer;
	}
}
	else if(choice == 2)
	{
		backAiOfferw:
		int pkgchose;
	cout << "1. Weekly Hybrid @Rs.120\n";
	cout << "2. Weekly All Network @Rs.170\n";
	cout << "3. Weekly Super Duper @Rs.210\n";
	cout << "4. Weekly Super Plus @Rs.250\n";
	cout << "0. Back\n";
	cout << "Choose Your Package: ";
	cin >> pkgchose;
	 if(pkgchose == 1)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Weekly Hybrid @Rs.120\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferw;
	}
	}
	else if(pkgchose == 2)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Weekly All Network @Rs.170\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferw;
	}
	}
	else if(pkgchose == 3)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Weekly Super Duper @Rs.210\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferw;
	}
	}
	else if(pkgchose == 4)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Weekly Super Plus @Rs.250\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferw;
	}
	}
	else if(pkgchose == 0)
	{
			goto allInOneOffer;
	}
	}
	else if(choice == 3)
	{
			backAiOfferm:
		int pkgchose;
	cout << "1. Monthly Hybrid @Rs.444\n";
	cout << "2. Monthly Super Duper @Rs.621\n";
	cout << "3. Monthly Super Duper Plus @Rs.977\n";
	cout << "0. Back\n";
	cout << "Choose Your Package: ";
	cin >> pkgchose;
	if(pkgchose == 1)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Monthly Hybrid @Rs.444\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferm;
	}
	}
	else if(pkgchose == 2)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Monthly Super Duper @Rs.621\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferm;
	}
	}
	else if(pkgchose == 3)
	{
			string pkgactive;
		cout << "Do you want to Activate Package Monthly Super Duper Plus @Rs.977\n";
		cout << "Y/N: ";
	cin >> pkgactive;
	if(pkgactive == "Y" || pkgactive == "y")
	{
			cout << "Your Package is Successfully Activate";
	}
	else if(pkgactive == "N" || pkgactive == "n")
	{
		goto backAiOfferm;
	}
	}
	else if(pkgchose == 0)
	{
			goto allInOneOffer;
	}
	}
	}
	else if(offerCode == 3)
	{
		int choice;
	cout << "1. Daily\n";
	cout << "2. Weekly\n";
	cout << "3. Monthly\n";
	cout << "0. Back\n";
	cout << "Enter Your Choice: ";
	cin >> choice;
	if(choice == 1)
	{
	cout << "1. 1Hour 1GB @Rs.9\n";
	cout << "2. 1Day Social - WA, FB & YouTube 1GB @Rs.15\n";
	cout << "3. 1Day 1GB @Rs.27\n";
	cout << "4. Daily Extreme @Rs.15\n";
	cout << "0. Back\n";
	}
	else if(choice == 2)
	{
	cout << "1. 7Day Social - WA,FB,IMO & Youtube 5GB @Rs.89\n";
	cout << "2. 7Day 4GB + 50 All-net @Rs.169\n";
	cout << "3. Weekly Mega @Rs.210\n";
	cout << "4. Weekly 24GB @Rs.275\n";
	cout << "5. Weekly Extreme @Rs.85\n";
	cout << "0. Back\n";
	}
	else if(choice == 3)
	{
	cout << "1. Monthly 2GB @Rs.89\n";
	cout << "2. Monthly Social -  WA,FB,IMO & SMS 5GB @Rs.99\n";
	cout << "3. Monthly 4GB @Rs.215\n";
	cout << "4. Monthly 12GB @Rs.349\n";
	cout << "5. Monthly 20GB @Rs.499\n";
	cout << "6. Monthly 25GB + 250 Allnet @Rs.620\n";
	cout << "0. Back\n";
	}
	
	}
	else if(offerCode == 0)
	{
		goto askUser;
	}
	
	
}
else{
	cout << "Sorry Your MMI Code is Invalid ! Please Try Again\n\n";
	string cont;
	cout << "Do you want to Continue (Y/N) : ";
	cin  >> cont;
	if( cont == "Y" || cont == "y")
	{
	cout << "\n\n";
	goto back;
		}
	else
	{
		return 0;
	}
}
 
 return 0;
}

#include<iostream>
using namespace std;
class student
{
	char name[30];
	int regno;
	int rank;
	public:
		void getdata(){
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"Registration number:";
			cin>>regno;
			cout<<"Enter rank:";
			cin>>rank;
			college();
		}
		void college()
		{
			int choice;
				if(rank<=2000){
				cout<<"Available colleges:\n1.JNTUH\n2.CBIT\n3.VASAVI\n4.VNR\n5.OU\n";
				cout<<"Enter your choice:";
				cin>>choice;
				switch(choice){
					case 1: cout<<"Available branches:\n1.CSE\n2.EEE\n3.ECE";break;
					case 2: cout<<"Available branches:\n1.CSE\n2.CSE-AIML\n3.CSE-IOT&CS\n4.AI&DS\n5.IT\n";break;
					case 3: cout<<"Available branches:\n1.CSE\n2.CSM\n";break;
					case 4: cout<<"Available branches:\n1.CSD\n2.CSM\n3.CSE\n";break;
					case 5: cout<<"Available branches:\n1.CSE\nEEE\n3.ECE\n4.MEC\n";break;
					default: cout<<"\nINVALID";
				}
			}
				if((rank>2000) && (rank<=4000)){
                cout<<"Available colleges:\n1.CBIT\n2.CVR\n3.GRRR\n4.JNTUH\n5.KMIT\n6.MGIT\n7.MVSR\n8.SNIST\n9.Vasavi\n10.VNR VIGNAN JYOTHI\n";
                cout<<"Enter your choice:";
				cin>>choice;
				switch(choice){
					case 1: cout<<"Available branches:\n1.EEE\n";break;
					case 2: cout<<"Available branches:\n1.CSE\n2.CSE(AIML)\n3.CSE(DS)\n";break;
					case 3: cout<<"Available branches:\n1.CSE\n2.CSE(DS)\n";break;
					case 4: cout<<"Available branches:\n1.CIVIL\n";break;
					case 5: cout<<"Available branches:\n1.CSE\n";break;
					case 6: cout<<"Available branches:\n1.CSE\n2.CSE(DS)";break;
					case 7: cout<<"Available branches:\n1.CSE\n";break;
					case 8: cout<<"Available branches:\n1.CSE\n";break;
					case 9: cout<<"Available branches:\n1.ECE\n2.IT\n";break;
					case 10: cout<<"Available branches:\n1.CS&BS\n2.CSE(CS)\n3.CSE(IOT)\n4.ECE\n5.EEE\n6.IT\n";break;
					default: cout<<"\nINVALID";
				}
			}
			if((rank>4000) && (rank<=6000)){
                cout<<"Available colleges:\n1.BV RAJU\n2.CBIT\n3.CVR\n4.GRRR\n5.JNTU,KARIMNAGAR\n6.JNTU,SULTANPUR\n7.KMIT\n8.MGIT\n9.OU\n10.SNIST\n11.VASAVI\n12.VARDHAMAN\n";
                cout<<"Enter your choice:";
				cin>>choice;
				switch(choice){
					case 1: cout<<"Available branches:\n1.CSE\n2.CSE(AIML)\n";break;
					case 2: cout<<"Available branches:\n1.MEC\n";break;
					case 3: cout<<"Available branches:\n1.CSE\n2.CSE(CS&IT)\n3.IT\n";break;
					case 4: cout<<"Available branches:\n1.CS&BS\n";break;
					case 5: cout<<"Available branches:\n1.CSE\n";break;
					case 6: cout<<"Available branches:\n1.CSE\n";break;
					case 7: cout<<"Available branches:\n1.CSE(DS)\n2.CSE(AIML)\n";break;
					case 8: cout<<"Available branches:\n1.CSE(AIML)\n";break;
					case 9: cout<<"Available branches:\n1.CIVIL\n";break;
					case 10: cout<<"Available branches:\n1.IT\n";break;
					case 11:cout<<"Available branches:\n1.EEE\n";break;
					case 12:cout<<"Available branches:\n1.CSE\n2.CSE(AIML)";break;
					default: cout<<"\nINVALID";
				}
			}
			if((rank>6000) && (rank<=8000)){
                cout<<"Available colleges:\n1.BV RAJU\n2.CVR\n3.ANURAG\n4.GRRR\n5.KITS\n6.KMIT\n7.MECS\n8.MGIT\n9.MVSR\n10.SNIST\n11.VASAVI\n12.VARDHAMAN\n";
                cout<<"Enter your choice:";
                cin>>choice;
                switch(choice){
                	case 1:cout<<"Available branches:\n1.CSE(DS)\n2.IT\n";break;
                	case 2:cout<<"Available branches:\n1.ECE\n";break;
                	case 3:cout<<"Available branches:\n1.CSE\n";break;
                	case 4:cout<<"Available branches:\n1.ECE\n2.IT\n";break;
                	case 5:cout<<"Available branches:\n1.CSE(AIML)\n";break;
                	case 6:cout<<"Available branches:\n1.IT\n";break;
                	case 7:cout<<"Available branches:\n1.CSE\n";break;
                	case 8: cout<<"Available branches:\n1.CS&BS\n2.IOT\n";break;
                	case 9:cout<<"Available branches:\n1.ECE\n2.IT\n";break;
                	case 10:cout<<"Available branches:\n1.ECE\n";break;
                	case 11:cout<<"Available branches:\n1.MECH\n";break;
                	case 12:cout<<"Available branches:\n1.IT\n";break;
                	default: cout<<"\nINVALID";
				}
			}
			if((rank>8000) && (rank<=10000)){
                cout<<"Available colleges:\n1.BV RAJU\n2.CBIT\n3.CMR\n4.CVR\n5.JNTUH\n6.JNTUK\n7.JNTUS\n8.KITS\n9.KUWL\n10.MECS\n11.OU\n12.VNR VIGNANJYOTHI\n13.VARDHAMAN\n";
                cout<<"Enter your choice:";
                cin>>choice;
                switch(choice){
                	case 1:cout<<"Available branches:\n1.CS&BS\n2.ECE\n";break;
                	case 2:cout<<"Available branches:\n1.CIVIL\n";break;
                	case 3:cout<<"Available branches:\n1.CSE\n";break;
                	case 4:cout<<"Available branches:\n1.EEE\n";break;
                	case 5:cout<<"Available branches:\n1.CHEMICAL ENGG\n";break;
                	case 6:cout<<"Available branches:\n1.ECE\n2.EEE\n3.IT\n";break;
                	case 7:cout<<"Available branches:\n1.ECE\n";break;
                	case 8:cout<<"Available branches:\n1.CSE\n";break;
                	case 9:cout<<"Available branches:\n1.CSE\n";break;
                	case 10:cout<<"Available branches:\n1.IT\n";break;
                	case 11:cout<<"Available branches:\n1.CHEMICAL ENGG\n";break;
                	case 12:cout<<"Available branches:\n1.MEC\n";break;
                	case 13:cout<<"Available branches:\n1.ECE\n";break;
                	default:cout<<"Invalid";
				}
			}
		}
};
int main(){
    int i,n,j;
    cout<<"Enter number of Students:";
    cin>>n;
    student s[n];
    cout<<"Student Details";
    for(i=0;i<n;i++)
        s[i].getdata();
}
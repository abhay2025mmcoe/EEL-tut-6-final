#include <stdio.h>
#include <string.h>
void main() {
  char collage[500][100] ={ "1002",
"1005",
"1012",
"1101",
"1105",
"1107",
"1114",
"1116",
"1117",
"1119",
"1120",
"1121",
"1123",
"1125",
"1126",
"1127",
"1128",
"1130",
"1180",
"1182",
"1265",
"1268",
"1276",
"2008",
"2020",
"2021","2111",
"2112",
"2113",
"2114",
"2116",
"2126",
"2127",
"2129",
"2130",
"2131",
"2133",
"2134",
"2135",
"2136",


};
  
  char add[500][100] = {"Government College of Engineering, Amravati",
"Sant Gadge Baba Amravati University, Amravati",
"Government College of Engineering, Yavatmal",
"Shri Sant Gajanan Maharaj College of Engineering, Shegaon",
"Prof. Ram Meghe Institute of Technology & Research, Amravati",
"P. R. Pote (Patil) Education & Welfare Trust's Group of Institution, Amravati",
"Sipna Shikshan Prasarak Mandal College of Engineering & Technology, Amravati",
"Shri Shivaji Education Society's College of Engineering and Technology, Akola",
"Babasaheb Naik College Of Engineering, Pusad",
"Anuradha Engineering College, Chikhali",
"Jawaharlal Darda Institute of Engineering and Technology, Yavatmal",
"Shri Hanuman Vyayam Prasarak Mandals College of Engineering & Technology, Amravati",
"Dr. Rajendra Gode Institute of Technology & Research, Amravati",
"Rajarshri Shahu College of Engineering, Buldhana",
"Dr. Smt. Kamaltai Gawai Institute of Engineering & Technology, Darapur, Amravati",
"Jagdambha College of Engineering and Technology, Yavatmal",
"Prof Ram Meghe College of Engineering and Management, Badnera",
"Pankaj Laddhad Institute of Technology & Management Studies, Yelgaon",
"Sanmati Engineering College, Washim",
"Padmashri Dr. V.B. Kolte College of Engineering, Malkapur, Buldhana",
"Mauli Group of Institutions, College of Engineering and Technology, Shegaon",
"Siddhivinayak Technical Campus, Shirasgon, Nile",
"Manav School of Engineering & Technology, Akola",
"Government College of Engineering, Aurangabad",
"Shri Guru Gobind Singhji Institute of Engineering and Technology, Nanded",
"University Department of Chemical Technology, Aurangabad","Everest Education Society, Group of Institutions (Integrated Campus), Ohar",
"Shree Yash Pratishthan, Shreeyash College of Engineering and Technology, Aurangabad",
"G. S. Mandal's Maharashtra Institute of Technology, Aurangabad",
"Deogiri Institute of Engineering and Management Studies, Aurangabad",
"Matoshri Pratishan's Group of Institutions (Integrated Campus), Kupsarwadi , Nanded",
"Gramodyogik Shikshan Mandal's Marathwada Institute of Technology, Aurangabad",
"Mahatma Gandhi Missions College of Engineering, Hingoli Rd, Nanded.",
"M.S. Bidve Engineering College, Latur",
"Terna Public Charitable Trust's College of Engineering, Osmanabad",
"Shree Tuljabhavani College of Engineering, Tuljapur",
"Mahatma Basaweshwar Education Society's College of Engineering, Ambejogai",
"Peoples Education Society's College of Engineering, Aurangabad",
"Hi-Tech Institute of Technology, Aurangabad",
"Aditya Engineering College , Beed"
 };
  
  int i;
  char p[500];
  int col=0;
  printf("Enter the collage ID or CODE  :");
  scanf("%s" , &p);
  printf("Your collage name\n:--");
  for(i=0;i<500;i++){
      col = strcmp( p , collage[i]);
       if(col==0) {
          printf("%s" , add[i], collage[i] );
          break;
       }
      
      
  }
  
 if(col!=0){
      printf("collage not fountd");
  }
  
  
   
    
}

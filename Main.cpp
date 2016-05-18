
#include <iostream>
#include <string>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"


int main()
{
	cv::Mat img1 = cv::imread("a1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img2 = cv::imread("b1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img3 = cv::imread("c1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img4 = cv::imread("d1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img5 = cv::imread("e1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img6 = cv::imread("f1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img7 = cv::imread("g1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img8 = cv::imread("h1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img9 = cv::imread("i1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img10 = cv::imread("j1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img11 = cv::imread("k1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img12 = cv::imread("l1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img13 = cv::imread("m1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img14 = cv::imread("n1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img15 = cv::imread("o1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img16 = cv::imread("p1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img17 = cv::imread("q1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img18 = cv::imread("r1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img19 = cv::imread("s1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img20 = cv::imread("t1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img21 = cv::imread("u1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img22 = cv::imread("v1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img23 = cv::imread("w1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img24 = cv::imread("x1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img25 = cv::imread("y1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img26 = cv::imread("z1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img27 = cv::imread("other1.JPG", CV_LOAD_IMAGE_COLOR);
	cv::Mat img28 = cv::imread("other2.JPG", CV_LOAD_IMAGE_COLOR);

	cv::Mat result(img1.rows, img1.cols, CV_8UC3, cv::Scalar(0,0,0));

	if (img1.empty() && img2.empty() && img3.empty() && img4.empty() && img5.empty() && img6.empty() && img7.empty() && img8.empty() && img9.empty() && img10.empty() && img11.empty() && img12.empty() && img13.empty() && img14.empty() && img15.empty() && img16.empty() && img17.empty() && img18.empty() && img19.empty() && img20.empty() && img21.empty() && img22.empty() && img23.empty() && img24.empty() && img25.empty() && img26.empty() && img27.empty() && img28.empty()) //check whether the image is loaded or not
	{
		std::cout << "Error : Image cannot be loaded..!!" << std::endl;
		//system("pause"); //wait for a key press
		std::cin.get();
		return -1;
	}


	//std::cout << static_cast<unsigned int>(img.at<uchar>(0,0));

	std::string text = "abysmaladversealarmingangryannoyanxiousapathyappallingatrociousawful badbanalbarbedbelligerentbemoanbeneathboringbroken callouscan'tclumsycoarsecoldcold - heartedcollapseconfusedcontradictorycontrarycorrosivecorruptcrazycreepycriminalcruelcrycutting deaddecayingdamagedamagingdastardlydeplorabledepresseddepriveddeformeddenydespicabledetrimentaldirtydiseasedisgustingdisheveleddishonestdishonorabledismaldistressdon'tdreadfuldreary enragederodingevil failfaultyfearfeeblefightfilthyfoulfrightenfrightful gawkyghastlygravegreedgrimgrimacegrossgrotesquegruesomeguilty haggardhardhard - heartedharmfulhatehideoushomelyhorrendoushorriblehostilehurthurtful ickyignoreignorantillimmatureimperfectimpossibleinaneinelegantinfernalinjureinjuriousinsaneinsidiousinsipid jealousjunky loselousylumpy maliciousmeanmenacingmessymisshapenmissingmisunderstoodmoanmoldymonstrous naivenastynaughtynegatenegativenevernonobodynondescriptnonsensenotnoxious objectionableodiousoffensiveoldoppressive painperturbpessimisticpettyplainpoisonouspoorprejudice questionablequirkyquit rejectrenegerepellantreptilianrepulsiverepugnantrevengerevoltingrockyrottenruderuthless sadsavagescarescaryscreamsevereshoddyshockingsicksickeningsinisterslimysmellysobbingsorryspitefulstickystinkystormystressfulstuckstupidsubstandardsuspectsuspicious tenseterribleterrifyingthreatening uglyundermineunfairunfavorableunhappyunhealthyunjustunluckyunpleasantupsetunsatisfactoryunsightlyuntowardunwantedunwelcomeunwholesomeunwieldyunwiseupset viceviciousvilevillainousvindictive warywearywickedwoefulworthlesswound yellyucky zerozerozerozero";
	int itt = 0;
	
	
	
	for (int i = 1; i < img1.rows; i++) {
		for (int j = 1; j < img1.cols; j++) {

			cv::Vec3b color1 = img1.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color2 = img2.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color3 = img3.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color4 = img4.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color5 = img5.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color6 = img6.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color7 = img7.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color8 = img8.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color9 = img9.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color10 = img10.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color11 = img11.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color12 = img12.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color13 = img13.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color14 = img14.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color15 = img15.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color16 = img16.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color17 = img17.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color18 = img18.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color19 = img19.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color20 = img20.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color21 = img21.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color22 = img22.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color23 = img23.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color24 = img24.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color25 = img25.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color26 = img26.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color27 = img27.at<cv::Vec3b>(cv::Point(j, i));
			cv::Vec3b color28 = img28.at<cv::Vec3b>(cv::Point(j, i));

			if (j < 1000) {
				if (text[itt] == 'a' || text[itt] == 'A') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color1;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color1 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'b' || text[itt] == 'B') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color2;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color2 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'c' || text[itt] == 'C') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color3;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color3 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'd' || text[itt] == 'D') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color4;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color4 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'e' || text[itt] == 'E') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color5;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color5 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'f' || text[itt] == 'F') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color6;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color6 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'g' || text[itt] == 'F') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color7;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color7 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'h' || text[itt] == 'H') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color8;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color8 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'i' || text[itt] == 'I') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color9;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color9 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'j' || text[itt] == 'J') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color10;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color10 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'k' || text[itt] == 'K') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color11;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color11 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'l' || text[itt] == 'L') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color12;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color12 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'm' || text[itt] == 'M') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color13;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color13 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'n' || text[itt] == 'N') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color14;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color14 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'o' || text[itt] == 'O') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color15;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color15 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'p' || text[itt] == 'P') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color16;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color16 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'q' || text[itt] == 'Q') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color17;

					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color17 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'r' || text[itt] == 'R') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color18;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color18 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 's' || text[itt] == 'S') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color19;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color19 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 't' || text[itt] == 'T') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color20;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color20 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'u' || text[itt] == 'U') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color21;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color21 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'v' || text[itt] == 'V') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color22;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color22 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'w' || text[itt] == 'W') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color23;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color23 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'x' || text[itt] == 'X') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color24;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color24 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'y' || text[itt] == 'Y') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color25;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color25 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == 'z' || text[itt] == 'Z') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color26;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color26 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == '.') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color27;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color27 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else if (text[itt] == ' ') {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color1;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color26 << " :: (" << i << ", " << j << ")" << std::endl;
				}
				else {
					std::cout << text[itt];
					result.at<cv::Vec3b>(cv::Point(j, i)) = color1;
					std::cout << result.at<cv::Vec3b>(cv::Point(j, i)) << color27 << " :: (" << i << ", " << j << ")" << std::endl;
					std::cout << "ERROR: No such character exists.\n";
				}
			} else {
	 result.at<cv::Vec3b>(cv::Point(j, i)) = color1;
 }

				


				if (itt < text.length() - 1) {
					itt = itt + 1;
				}
				else {
					itt = 0;
				}
			

		}
	}
	
	std::cout << img1.rows;
	std::cout << img1.cols;

	//cv::imwrite("C:/MaCy_image.jpg", result);

	cv::namedWindow("MyWindow", CV_WINDOW_AUTOSIZE); //create a window with the name "MyWindow"

	cv::imshow("MyWindow", result); //display the image which is stored in the 'img' in the "MyWindow" window

	cv::waitKey(0); //wait infinite time for a keypress

	cv::destroyWindow("MyWindow"); //destroy the window with the name, "MyWindow"


	return 0;
}

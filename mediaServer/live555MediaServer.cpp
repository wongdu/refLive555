/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**********/
// Copyright (c) 1996-2020, Live Networks, Inc.  All rights reserved
// LIVE555 Media Server
// main program

#include <BasicUsageEnvironment.hh>
#include "DynamicRTSPServer.hh"
#include "version.hh"

#include<iostream>
#include<memory>
//#include <regex>
#include "reg_exp.h"


int main1(int argc, char** argv){
	std::string lastModFile = "20200601";
	int   len = 0;
	char  output[256];
	const char* res;
	const char error[] = "@NO";
	const char empty[] = "";
	//const char* pattern = "(^[1-9]\d{3}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1])$)";
	////const char* sampleString = lastModFile.c_str();
	//const char* sampleString = "20200601";

	//const char* pattern = R"(^[1-9]\d{3}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1])$)";
	////const char* sampleString = lastModFile.c_str();
	//const char* sampleString = "20200601";

	//const char* pattern = "[1-9]\d{3}";
	////const char* sampleString = lastModFile.c_str();
	////const char* sampleString = "2020";
	//const char* sampleString = "2123";
	//regex_debug("[^xyz]","zab","a");   

	//const char* pattern = "[^xyz]";
	////const char* sampleString = lastModFile.c_str();
	//const char* sampleString = "z1ab";

	//const char* pattern = "^[1-9][0-9]{3}";
	//const char* pattern = R"(^[1-9][0-9]{3}$)";
	////const char* pattern = "[1-9]\\d{3}";
	////const char* sampleString = lastModFile.c_str();
	////const char* sampleString = "2020";
	//const char* sampleString = "2020"; 

	const char* pattern = "^[1-9][0-9]{3}";
	//const char* pattern = "[1-9]\\d{3}";
	//const char* sampleString = lastModFile.c_str();
	//const char* sampleString = "2020";
	const char* sampleString = "2020"; //(0[1-9]|1[0-2]) "01"

	res = regex_search(pattern, sampleString, &len);
	if (len > 0){ 
		memcpy(output, res, len); output[len] = '\0';
	}	else if (len == 0)	
		memcpy(output, empty, strlen(empty) + 1);
	else			
		memcpy(output, error, strlen(error) + 1);
// 	// Print only errors
// 	if (strcmp(output, trueAnswer))		fprintf(stderr, "Error: Reg:%s\t\t in %s\t\t : %s,\n", pattern, sampleString, output);
// 	else								fprintf(stderr, "Test OK!\n"

	//res=regex_search("(^[1-9]\d{3}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1])$)", lastModFile.c_str(), NULL);
	return 0;
}

int main2(int argc, char** argv){
	/*char msg_[4096];
	char msg2[4096] = {0};
	std::cout << strlen(msg_) << std::endl;
	std::cout <<"strlen(msg2): "<< strlen(msg2) << std::endl;
	memset(msg_, 0, sizeof msg_);
	sprintf(msg_, "ent:%s", "test");
	std::cout << strlen(msg_) << std::endl;*/
	/*std::unique_ptr<int> pt;
	if (!pt){
	std::cout << "not null" << std::endl;
	}
	else{
		std::cout << "is null" << std::endl;
	}*/
	/*std::string currFilePath = "log";

	char timebuf[32] = { 0 };
	struct tm* tm;
	time_t now = time(NULL);
	tm = localtime(&now);
	strftime(timebuf, sizeof timebuf, "%Y%m%d", tm);

	std::string lastModFile = "w_20200528_205501.log";
	std::cout << lastModFile.length() << std::endl;
	lastModFile = lastModFile.substr(0, lastModFile.find_last_of('_'));
	lastModFile = lastModFile.substr(lastModFile.find_last_of('_') + 1);
	std::cout << lastModFile.c_str() << std::endl;*/

	//char timebuf[32] = { 0 };
	//struct tm* tm;
	//time_t now = time(NULL);
	//tm = localtime(&now);
	//strftime(timebuf, sizeof timebuf, "%Y%m%d", tm);

	///*std::string currFilePath("log", 3);
	//std::cout << currFilePath.c_str() << std::endl;
	//std::cout << currFilePath.length() << std::endl;
	//std::cout << currFilePath.length() << std::endl;*/

	////std::string currFilePath(timebuf, strlen(timebuf));
	//std::string currFilePath(timebuf);
	//std::cout << currFilePath.c_str() << std::endl;
	//std::cout << currFilePath.length() << std::endl;
	//std::cout << strlen(timebuf) << std::endl;

	/*if ("log" == currFilePath){
		std::cout << "is equal" << std::endl;
	}
	else{
		std::cout << "not equal" << std::endl;
	}

	if ("20200528" == std::string(timebuf)){
		std::cout << "is equal" << std::endl;
	}
	else{
		std::cout << "not equal" << std::endl;
	}*/
	/*std::cmatch m;
	auto ret = std::regex_match("<xml>value</xml>", m, std::regex("<(.*)>(.*)</(\\1)>"));
	if (ret)
	{
		std::cout << m.str() << std::endl;
		std::cout << m.length() << std::endl;
		std::cout << m.position() << std::endl;
	}*/

	//std::cmatch m;
	////auto ret = std::regex_match("20200528", m, std::regex("^[1-9]\d{3}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1])$"));
	////auto ret = std::regex_match("2020-05-28", m, std::regex("^[1-9]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1])$"));
	////auto ret = std::regex_search("2020", m, std::regex("[1-9]\d{3}"));
	////auto ret = std::regex_match("2020", std::regex("[1-9]\d{3}"));
	//auto ret = std::regex_match("20200528", std::regex(R"(^[1-9]\d{3}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1])$)"));
	//if (ret)
	//{
	//	/*std::cout << m.str() << std::endl;
	//	std::cout << m.length() << std::endl;
	//	std::cout << m.position() << std::endl;*/
	//	std::cout << "match" << std::endl;
	//}


	///*std::string str = "o ";
	//std::regex pattern("o\\s");*/
	//std::string str = "2020";
	////std::regex pattern("[1-9]\\d{3}");
	//std::regex pattern(R"([1-9]\d{3})");

	//bool matched = std::regex_match(str, pattern);
	//if (matched) {
	//	std::cout << "matched.." << std::endl;
	//}
	//else{
	//	std::cout << "not matched." << std::endl;
	//}
	return 0;
}

int main(int argc, char** argv) {
  // Begin by setting up our usage environment:
  TaskScheduler* scheduler = BasicTaskScheduler::createNew();
  UsageEnvironment* env = BasicUsageEnvironment::createNew(*scheduler);

  UserAuthenticationDatabase* authDB = NULL;
#ifdef ACCESS_CONTROL
  // To implement client access control to the RTSP server, do the following:
  authDB = new UserAuthenticationDatabase;
  authDB->addUserRecord("username1", "password1"); // replace these with real strings
  // Repeat the above with each <username>, <password> that you wish to allow
  // access to the server.
#endif

  // Create the RTSP server.  Try first with the default port number (554),
  // and then with the alternative port number (8554):
  RTSPServer* rtspServer;
  portNumBits rtspServerPortNum = 554;
  rtspServer = DynamicRTSPServer::createNew(*env, rtspServerPortNum, authDB);
  if (rtspServer == NULL) {
    rtspServerPortNum = 8554;
    rtspServer = DynamicRTSPServer::createNew(*env, rtspServerPortNum, authDB);
  }
  if (rtspServer == NULL) {
    *env << "Failed to create RTSP server: " << env->getResultMsg() << "\n";
    exit(1);
  }

  *env << "LIVE555 Media Server\n";
  *env << "\tversion " << MEDIA_SERVER_VERSION_STRING
       << " (LIVE555 Streaming Media library version "
       << LIVEMEDIA_LIBRARY_VERSION_STRING << ").\n";

  char* urlPrefix = rtspServer->rtspURLPrefix();
  *env << "Play streams from this server using the URL\n\t"
       << urlPrefix << "<filename>\nwhere <filename> is a file present in the current directory.\n";
  *env << "Each file's type is inferred from its name suffix:\n";
  *env << "\t\".264\" => a H.264 Video Elementary Stream file\n";
  *env << "\t\".265\" => a H.265 Video Elementary Stream file\n";
  *env << "\t\".aac\" => an AAC Audio (ADTS format) file\n";
  *env << "\t\".ac3\" => an AC-3 Audio file\n";
  *env << "\t\".amr\" => an AMR Audio file\n";
  *env << "\t\".dv\" => a DV Video file\n";
  *env << "\t\".m4e\" => a MPEG-4 Video Elementary Stream file\n";
  *env << "\t\".mkv\" => a Matroska audio+video+(optional)subtitles file\n";
  *env << "\t\".mp3\" => a MPEG-1 or 2 Audio file\n";
  *env << "\t\".mpg\" => a MPEG-1 or 2 Program Stream (audio+video) file\n";
  *env << "\t\".ogg\" or \".ogv\" or \".opus\" => an Ogg audio and/or video file\n";
  *env << "\t\".ts\" => a MPEG Transport Stream file\n";
  *env << "\t\t(a \".tsx\" index file - if present - provides server 'trick play' support)\n";
  *env << "\t\".vob\" => a VOB (MPEG-2 video with AC-3 audio) file\n";
  *env << "\t\".wav\" => a WAV Audio file\n";
  *env << "\t\".webm\" => a WebM audio(Vorbis)+video(VP8) file\n";
  *env << "See http://www.live555.com/mediaServer/ for additional documentation.\n";

  // Also, attempt to create a HTTP server for RTSP-over-HTTP tunneling.
  // Try first with the default HTTP port (80), and then with the alternative HTTP
  // port numbers (8000 and 8080).

  if (rtspServer->setUpTunnelingOverHTTP(80) || rtspServer->setUpTunnelingOverHTTP(8000) || rtspServer->setUpTunnelingOverHTTP(8080)) {
    *env << "(We use port " << rtspServer->httpServerPortNum() << " for optional RTSP-over-HTTP tunneling, or for HTTP live streaming (for indexed Transport Stream files only).)\n";
  } else {
    *env << "(RTSP-over-HTTP tunneling is not available.)\n";
  }

  env->taskScheduler().doEventLoop(); // does not return

  return 0; // only to prevent compiler warning
}

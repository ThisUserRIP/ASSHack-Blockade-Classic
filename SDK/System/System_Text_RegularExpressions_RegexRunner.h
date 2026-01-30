#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct Match; };
namespace System::System::Text::RegularExpressions { struct Regex; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace System::System::Text::RegularExpressions
{
	struct RegexRunner : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t runtextbeg;
		int32_t runtextend;
		int32_t runtextstart;
		mscorlib::System::String* runtext;
		int32_t runtextpos;
		IL2CPP::Array<int32_t>* runtrack;
		int32_t runtrackpos;
		IL2CPP::Array<int32_t>* runstack;
		int32_t runstackpos;
		IL2CPP::Array<int32_t>* runcrawl;
		int32_t runcrawlpos;
		int32_t runtrackcount;
		System::Text::RegularExpressions::Match* runmatch;
		System::Text::RegularExpressions::Regex* runregex;
		int32_t timeout;
		bool ignoreTimeout;
		int32_t timeoutOccursAt;
		int32_t timeoutChecksToSkip;
		void _ctor();
		System::Text::RegularExpressions::Match* Scan(System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen, bool quick, mscorlib::System::TimeSpan timeout);
		void StartTimeoutWatch();
		void CheckTimeout();
		void DoCheckTimeout();
		void Go();
		bool FindFirstChar();
		void InitTrackCount();
		void InitMatch();
		System::Text::RegularExpressions::Match* TidyMatch(bool quick);
		void EnsureStorage();
		bool IsBoundary(int32_t index, int32_t startpos, int32_t endpos);
		bool IsECMABoundary(int32_t index, int32_t startpos, int32_t endpos);
		void DoubleTrack();
		void DoubleStack();
		void DoubleCrawl();
		void Crawl(int32_t i);
		int32_t Popcrawl();
		int32_t Crawlpos();
		void Capture(int32_t capnum, int32_t start, int32_t end);
		void TransferCapture(int32_t capnum, int32_t uncapnum, int32_t start, int32_t end);
		void Uncapture();
		bool IsMatched(int32_t cap);
		int32_t MatchIndex(int32_t cap);
		int32_t MatchLength(int32_t cap);
	};
}


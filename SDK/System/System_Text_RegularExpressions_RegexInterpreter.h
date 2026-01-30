#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_RegularExpressions_RegexRunner.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct RegexCode; };
namespace System::System::Text::RegularExpressions { struct RegexPrefix; };
namespace System::System::Text::RegularExpressions { struct RegexBoyerMoore; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System::System::Text::RegularExpressions
{
	struct RegexInterpreter : System::Text::RegularExpressions::RegexRunner
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t runoperator;
		IL2CPP::Array<int32_t>* runcodes;
		int32_t runcodepos;
		IL2CPP::Array<mscorlib::System::String*>* runstrings;
		System::Text::RegularExpressions::RegexCode* runcode;
		System::Text::RegularExpressions::RegexPrefix* runfcPrefix;
		System::Text::RegularExpressions::RegexBoyerMoore* runbmPrefix;
		int32_t runanchors;
		bool runrtl;
		bool runci;
		mscorlib::System::Globalization::CultureInfo* runculture;
		void _ctor(System::Text::RegularExpressions::RegexCode* code, mscorlib::System::Globalization::CultureInfo* culture);
		void InitTrackCount();
		void Advance();
		void Advance(int32_t i);
		void Goto(int32_t newpos);
		void Textto(int32_t newpos);
		void Trackto(int32_t newpos);
		int32_t Textstart();
		int32_t Textpos();
		int32_t Trackpos();
		void TrackPush();
		void TrackPush(int32_t I1);
		void TrackPush(int32_t I1, int32_t I2);
		void TrackPush(int32_t I1, int32_t I2, int32_t I3);
		void TrackPush2(int32_t I1);
		void TrackPush2(int32_t I1, int32_t I2);
		void Backtrack();
		void SetOperator(int32_t op);
		void TrackPop();
		void TrackPop(int32_t framesize);
		int32_t TrackPeek();
		int32_t TrackPeek(int32_t i);
		void StackPush(int32_t I1);
		void StackPush(int32_t I1, int32_t I2);
		void StackPop();
		void StackPop(int32_t framesize);
		int32_t StackPeek();
		int32_t StackPeek(int32_t i);
		int32_t Operator();
		int32_t Operand(int32_t i);
		int32_t Leftchars();
		int32_t Rightchars();
		int32_t Bump();
		int32_t Forwardchars();
		wchar_t Forwardcharnext();
		bool Stringmatch(mscorlib::System::String* str);
		bool Refmatch(int32_t index, int32_t len);
		void Backwardnext();
		wchar_t CharAt(int32_t j);
		bool FindFirstChar();
		void Go();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Globalization
{
	struct Bootstring : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t delimiter;
		int32_t base_num;
		int32_t tmin;
		int32_t tmax;
		int32_t skew;
		int32_t damp;
		int32_t initial_bias;
		int32_t initial_n;
		void _ctor(wchar_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN);
		mscorlib::System::String* Encode(mscorlib::System::String* s, int32_t offset);
		wchar_t EncodeDigit(int32_t d);
		int32_t DecodeDigit(wchar_t c);
		int32_t Adapt(int32_t delta, int32_t numPoints, bool firstTime);
		mscorlib::System::String* Decode(mscorlib::System::String* s, int32_t offset);
	};
}


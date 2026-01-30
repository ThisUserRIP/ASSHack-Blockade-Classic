#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct EraInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t era;
		int64_t ticks;
		int32_t yearOffset;
		int32_t minEraYear;
		int32_t maxEraYear;
		mscorlib::System::String* eraName;
		mscorlib::System::String* abbrevEraName;
		mscorlib::System::String* englishEraName;
		void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear);
		void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, mscorlib::System::String* eraName, mscorlib::System::String* abbrevEraName, mscorlib::System::String* englishEraName);
	};
}


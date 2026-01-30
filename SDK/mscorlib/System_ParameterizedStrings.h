#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct ParameterizedStrings_LowLevelStack; };
namespace mscorlib::System { struct String; };
#include "System_ParameterizedStrings_FormatParam.h"
namespace mscorlib::System { struct ParameterizedStrings_FormatParam; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System
{
	struct ParameterizedStrings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::ParameterizedStrings_LowLevelStack* _cachedStack;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* Evaluate(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* args);
		static mscorlib::System::String* EvaluateInternal(mscorlib::System::String* format, int32_t& pos, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* args, mscorlib::System::ParameterizedStrings_LowLevelStack* stack, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& dynamicVars, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& staticVars);
		static bool AsBool(int32_t i);
		static int32_t AsInt(bool b);
		static mscorlib::System::String* StringFromAsciiBytes(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t length);
		static int32_t snprintf(uint8_t* str, intptr_t size, mscorlib::System::String* format, mscorlib::System::String* arg1);
		static int32_t snprintf(uint8_t* str, intptr_t size, mscorlib::System::String* format, int32_t arg1);
		static mscorlib::System::String* FormatPrintF(mscorlib::System::String* format, mscorlib::System::Object* arg);
		static IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* GetDynamicOrStaticVariables(wchar_t c, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& dynamicVars, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& staticVars, int32_t& index);
	};
}


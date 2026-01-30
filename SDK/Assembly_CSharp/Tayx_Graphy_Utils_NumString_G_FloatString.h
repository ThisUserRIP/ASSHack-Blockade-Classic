#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Tayx::Graphy::Utils::NumString
{
	struct G_FloatString : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* floatFormat;
			float decimalMultiplier;
			IL2CPP::Array<mscorlib::System::String*>* negativeBuffer;
			IL2CPP::Array<mscorlib::System::String*>* positiveBuffer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_Inited();
		static float get_MinValue();
		static float get_MaxValue();
		static void Init(float minNegativeValue, float maxPositiveValue, int32_t decimals);
		static mscorlib::System::String* ToStringNonAlloc(float value);
		static mscorlib::System::String* ToStringNonAlloc(float value, mscorlib::System::String* format);
		static int32_t ToInt(float f);
		static float ToFloat(int32_t i);
		static int32_t Pow(int32_t f, int32_t p);
		static int32_t ToIndex(float f);
		static float FromIndex(int32_t i);
		static void _cctor();
	};
}


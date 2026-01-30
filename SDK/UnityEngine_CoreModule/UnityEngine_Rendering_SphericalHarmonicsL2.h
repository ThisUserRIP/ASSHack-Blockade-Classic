#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct SphericalHarmonicsL2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float shr0;
		float shr1;
		float shr2;
		float shr3;
		float shr4;
		float shr5;
		float shr6;
		float shr7;
		float shr8;
		float shg0;
		float shg1;
		float shg2;
		float shg3;
		float shg4;
		float shg5;
		float shg6;
		float shg7;
		float shg8;
		float shb0;
		float shb1;
		float shb2;
		float shb3;
		float shb4;
		float shb5;
		float shb6;
		float shb7;
		float shb8;
		float get_Item(int32_t rgb, int32_t coefficient);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2 other);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2 lhs, UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2 rhs);
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2& lhs, UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2& rhs);
}


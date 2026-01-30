#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_UnityTools.h"
namespace Rewired_Core::Rewired::Utils { struct UnityTools; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Utils_UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Utils
{
	struct UnityTools_UnityVersionClass : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t major;
		int32_t minor;
		int32_t maintenance;
		Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl type;
		int32_t build;
		void _ctor(mscorlib::System::String* versionString);
		mscorlib::System::String* ToString();
		mscorlib::System::String* UIbbzQanVExADNhDbatxDvqpsDPR(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl A_1);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_LessThan(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool op_GreaterThan(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool op_GreaterThanOrEqual(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool op_LessThanOrEqual(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool op_Equality(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool op_Inequality(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static int32_t Comparison(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b);
		static bool IsValidVersionString(mscorlib::System::String* versionString);
		static int32_t lvgSjmqOfeJlpxUUWbNQGkTpfXu(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl A_0);
	};
	bool operator<(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
	bool operator>(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
	bool operator>=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
	bool operator<=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
	bool operator==(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
	bool operator!=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b);
}


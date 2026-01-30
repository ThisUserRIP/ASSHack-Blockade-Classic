#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct RewiredVersion
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t version1;
		int32_t version2;
		int32_t version3;
		int32_t version4;
		mscorlib::System::String* unityVersion;
		void _ctor(int32_t version1, int32_t version2, int32_t version3, int32_t version4, mscorlib::System::String* unityVersion);
		void _ctor(mscorlib::System::String* versionString);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		static bool op_Equality(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
		static bool op_Inequality(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
		static bool op_GreaterThan(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
		static bool op_LessThan(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
	};
	bool operator==(Rewired_Core::Rewired::RewiredVersion& a, Rewired_Core::Rewired::RewiredVersion& b);
	bool operator!=(Rewired_Core::Rewired::RewiredVersion& a, Rewired_Core::Rewired::RewiredVersion& b);
	bool operator>(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
	bool operator<(Rewired_Core::Rewired::RewiredVersion a, Rewired_Core::Rewired::RewiredVersion b);
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired
{
	struct PidVid
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t productId;
		uint16_t vendorId;
		void _ctor(uint16_t productId, uint16_t vendorId);
		void _ctor(mscorlib::System::String* pidVid);
		void _ctor(mscorlib::System::Guid productGuid);
		bool get_isZero();
		bool Equals(mscorlib::System::String* pidVid);
		mscorlib::System::Guid ToProductGuid();
		bool wvmEQyHcevqNifIKGLmUlHXWTKxK(mscorlib::System::String* A_1);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Equals(Rewired_Core::Rewired::PidVid other);
		static bool op_Equality(Rewired_Core::Rewired::PidVid x, Rewired_Core::Rewired::PidVid y);
		static bool op_Inequality(Rewired_Core::Rewired::PidVid x, Rewired_Core::Rewired::PidVid y);
		mscorlib::System::String* ToString();
		static bool ArrayContains(IL2CPP::Array<mscorlib::System::String*>* pidVids, Rewired_Core::Rewired::PidVid& vidPid);
		static mscorlib::System::String* LmQpevlriVvVtFFxrfkfElhJRfDH(mscorlib::System::String* A_0);
	};
	bool operator==(Rewired_Core::Rewired::PidVid& x, Rewired_Core::Rewired::PidVid& y);
	bool operator!=(Rewired_Core::Rewired::PidVid& x, Rewired_Core::Rewired::PidVid& y);
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct MeshId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t m_SubId1;
		uint64_t m_SubId2;
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_XRModule::UnityEngine::XR::MeshId other);
		static void _cctor();
	};
}


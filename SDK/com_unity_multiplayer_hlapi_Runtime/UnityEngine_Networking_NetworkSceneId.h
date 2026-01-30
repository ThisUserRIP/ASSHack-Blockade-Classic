#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkSceneId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_Value;
		void _ctor(uint32_t value);
		bool IsEmpty();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId other);
		static bool op_Equality(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId c1, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId c2);
		static bool op_Inequality(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId c1, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId c2);
		mscorlib::System::String* ToString();
		uint32_t get_Value();
	};
	bool operator==(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId& c1, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId& c2);
	bool operator!=(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId& c1, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId& c2);
}


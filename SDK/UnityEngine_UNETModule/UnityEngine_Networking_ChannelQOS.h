#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_QosType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct ChannelQOS : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::QosType m_Type;
		bool m_BelongsSharedOrderChannel;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::QosType value);
		void _ctor();
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::ChannelQOS* channel);
		UnityEngine_UNETModule::UnityEngine::Networking::QosType get_QOS();
	};
}


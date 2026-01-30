#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Networking_NetworkProximityChecker_CheckMethod.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkProximityChecker : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t visRange;
		float visUpdateInterval;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkProximityChecker_CheckMethod checkMethod;
		bool forceHidden;
		float m_VisUpdateTime;
		void Update();
		bool OnCheckObserver(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newObserver);
		bool OnRebuildObservers(System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* observers, bool initial);
		void OnSetLocalVisibility(bool vis);
		static void SetVis(UnityEngine_CoreModule::UnityEngine::GameObject* go, bool vis);
		void _ctor();
	};
}


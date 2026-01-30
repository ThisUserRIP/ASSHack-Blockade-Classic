#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct AnimationMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct AnimationParametersMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct AnimationTriggerMessage; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkAnimator : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::Animator* m_Animator;
		uint32_t m_ParameterSendBits;
		int32_t m_AnimationHash;
		int32_t m_TransitionHash;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* m_ParameterWriter;
		float m_SendTimer;
		mscorlib::System::String* param0;
		mscorlib::System::String* param1;
		mscorlib::System::String* param2;
		mscorlib::System::String* param3;
		mscorlib::System::String* param4;
		mscorlib::System::String* param5;
		struct StaticFields
		{
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AnimationMessage* s_AnimationMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AnimationParametersMessage* s_AnimationParametersMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AnimationTriggerMessage* s_AnimationTriggerMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_AnimationModule::UnityEngine::Animator* get_animator();
		void set_animator(UnityEngine_AnimationModule::UnityEngine::Animator* value);
		void SetParameterAutoSend(int32_t index, bool value);
		bool GetParameterAutoSend(int32_t index);
		bool get_sendMessagesAllowed();
		void ResetParameterOptions();
		void FixedUpdate();
		bool CheckAnimStateChanged(int32_t& stateHash, float& normalizedTime);
		void CheckSendRate();
		void SendMessage(int16_t type, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		void SetSendTrackingParam(mscorlib::System::String* p, int32_t i);
		void SetRecvTrackingParam(mscorlib::System::String* p, int32_t i);
		void HandleAnimMsg(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AnimationMessage* msg, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void HandleAnimParamsMsg(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AnimationParametersMessage* msg, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void HandleAnimTriggerMsg(int32_t hash);
		void WriteParameters(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool autoSend);
		void ReadParameters(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool autoSend);
		bool OnSerialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool forceAll);
		void OnDeserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void SetTrigger(mscorlib::System::String* triggerName);
		void SetTrigger(int32_t hash);
		static void OnAnimationServerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnAnimationParametersServerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnAnimationTriggerServerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnAnimationClientMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnAnimationParametersClientMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnAnimationTriggerClientMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void _ctor();
		static void _cctor();
	};
}


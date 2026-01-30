#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Networking_NetworkTransform_AxisSyncMode.h"
#include "UnityEngine_Networking_NetworkTransform_CompressionSyncMode.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform_ClientMoveCallback3D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkTransformChild : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_Target;
		uint32_t m_ChildIndex;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform* m_Root;
		float m_SendInterval;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode m_SyncRotationAxis;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode m_RotationSyncCompression;
		float m_MovementThreshold;
		float m_InterpolateRotation;
		float m_InterpolateMovement;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* m_ClientMoveCallback3D;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_TargetSyncPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_TargetSyncRotation3D;
		float m_LastClientSyncTime;
		float m_LastClientSendTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_PrevPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_PrevRotation;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* m_LocalTransformWriter;
		struct StaticFields
		{
			float k_LocalMovementThreshold;
			float k_LocalRotationThreshold;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Transform* get_target();
		void set_target(UnityEngine_CoreModule::UnityEngine::Transform* value);
		uint32_t get_childIndex();
		float get_sendInterval();
		void set_sendInterval(float value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode get_syncRotationAxis();
		void set_syncRotationAxis(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode get_rotationSyncCompression();
		void set_rotationSyncCompression(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode value);
		float get_movementThreshold();
		void set_movementThreshold(float value);
		float get_interpolateRotation();
		void set_interpolateRotation(float value);
		float get_interpolateMovement();
		void set_interpolateMovement(float value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* get_clientMoveCallback3D();
		void set_clientMoveCallback3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* value);
		float get_lastSyncTime();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_targetSyncPosition();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_targetSyncRotation3D();
		void OnValidate();
		void Awake();
		bool OnSerialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool initialState);
		void SerializeModeTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void OnDeserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void UnserializeModeTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void FixedUpdate();
		void FixedUpdateServer();
		void FixedUpdateClient();
		void Update();
		bool HasMoved();
		void SendTransform();
		static void HandleChildTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		int32_t GetNetworkChannel();
		float GetNetworkSendInterval();
		void _ctor();
	};
}


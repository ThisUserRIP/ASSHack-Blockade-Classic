#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
#include "UnityEngine_Networking_NetworkTransform_TransformSyncMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Networking_NetworkTransform_AxisSyncMode.h"
#include "UnityEngine_Networking_NetworkTransform_CompressionSyncMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform_ClientMoveCallback3D; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform_ClientMoveCallback2D; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Rigidbody2D; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkTransform : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_TransformSyncMode m_TransformSyncMode;
		float m_SendInterval;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode m_SyncRotationAxis;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode m_RotationSyncCompression;
		bool m_SyncSpin;
		float m_MovementTheshold;
		float m_VelocityThreshold;
		float m_SnapThreshold;
		float m_InterpolateRotation;
		float m_InterpolateMovement;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* m_ClientMoveCallback3D;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D* m_ClientMoveCallback2D;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* m_RigidBody3D;
		UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* m_RigidBody2D;
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* m_CharacterController;
		bool m_Grounded;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_TargetSyncPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_TargetSyncVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_FixedPosDiff;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_TargetSyncRotation3D;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_TargetSyncAngularVelocity3D;
		float m_TargetSyncRotation2D;
		float m_TargetSyncAngularVelocity2D;
		float m_LastClientSyncTime;
		float m_LastClientSendTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_PrevPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_PrevRotation;
		float m_PrevRotation2D;
		float m_PrevVelocity;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* m_LocalTransformWriter;
		struct StaticFields
		{
			float k_LocalMovementThreshold;
			float k_LocalRotationThreshold;
			float k_LocalVelocityThreshold;
			float k_MoveAheadRatio;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_TransformSyncMode get_transformSyncMode();
		void set_transformSyncMode(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_TransformSyncMode value);
		float get_sendInterval();
		void set_sendInterval(float value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode get_syncRotationAxis();
		void set_syncRotationAxis(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode get_rotationSyncCompression();
		void set_rotationSyncCompression(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode value);
		bool get_syncSpin();
		void set_syncSpin(bool value);
		float get_movementTheshold();
		void set_movementTheshold(float value);
		float get_velocityThreshold();
		void set_velocityThreshold(float value);
		float get_snapThreshold();
		void set_snapThreshold(float value);
		float get_interpolateRotation();
		void set_interpolateRotation(float value);
		float get_interpolateMovement();
		void set_interpolateMovement(float value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* get_clientMoveCallback3D();
		void set_clientMoveCallback3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback3D* value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D* get_clientMoveCallback2D();
		void set_clientMoveCallback2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D* value);
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* get_characterContoller();
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* get_rigidbody3D();
		UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* get_rigidbody2D();
		float get_lastSyncTime();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_targetSyncPosition();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_targetSyncVelocity();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_targetSyncRotation3D();
		float get_targetSyncRotation2D();
		bool get_grounded();
		void set_grounded(bool value);
		void OnValidate();
		void Awake();
		void OnStartServer();
		bool OnSerialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, bool initialState);
		void SerializeModeTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void VerifySerializeComponentExists();
		void SerializeMode3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void SerializeModeCharacterController(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void SerializeMode2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void OnDeserialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void UnserializeModeTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void UnserializeMode3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void UnserializeMode2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void UnserializeModeCharacterController(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState);
		void FixedUpdate();
		void FixedUpdateServer();
		bool CheckVelocityChanged();
		void FixedUpdateClient();
		void InterpolateTransformMode3D();
		void InterpolateTransformModeCharacterController();
		void InterpolateTransformMode2D();
		void Update();
		bool HasMoved();
		void SendTransform();
		static void HandleTransform(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void WriteAngle(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, float angle, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static float ReadAngle(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeVelocity3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, UnityEngine_CoreModule::UnityEngine::Vector3 velocity, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeVelocity2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, UnityEngine_CoreModule::UnityEngine::Vector2 velocity, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeRotation3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, UnityEngine_CoreModule::UnityEngine::Quaternion rot, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode mode, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeRotation2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, float rot, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeSpin3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, UnityEngine_CoreModule::UnityEngine::Vector3 angularVelocity, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode mode, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static void SerializeSpin2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, float angularVelocity, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static UnityEngine_CoreModule::UnityEngine::Vector3 UnserializeVelocity3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static UnityEngine_CoreModule::UnityEngine::Vector3 UnserializeVelocity2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static UnityEngine_CoreModule::UnityEngine::Quaternion UnserializeRotation3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode mode, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static float UnserializeRotation2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static UnityEngine_CoreModule::UnityEngine::Vector3 UnserializeSpin3D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_AxisSyncMode mode, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		static float UnserializeSpin2D(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_CompressionSyncMode compression);
		int32_t GetNetworkChannel();
		float GetNetworkSendInterval();
		void OnStartAuthority();
		void _ctor();
	};
}


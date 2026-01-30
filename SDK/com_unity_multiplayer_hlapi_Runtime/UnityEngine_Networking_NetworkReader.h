#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "UnityEngine_Networking_NetworkSceneId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkSceneId; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Plane.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetBuffer* m_buf;
		struct StaticFields
		{
			int32_t k_MaxStringLength;
			int32_t k_InitialStringBufferSize;
			IL2CPP::Array<uint8_t>* s_StringReaderBuffer;
			mscorlib::System::Text::Encoding* s_Encoding;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void _ctor(IL2CPP::Array<uint8_t>* buffer);
		static void Initialize();
		uint32_t get_Position();
		int32_t get_Length();
		void SeekZero();
		void Replace(IL2CPP::Array<uint8_t>* buffer);
		uint32_t ReadPackedUInt32();
		uint64_t ReadPackedUInt64();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId ReadNetworkId();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId ReadSceneId();
		uint8_t ReadByte();
		int8_t ReadSByte();
		int16_t ReadInt16();
		uint16_t ReadUInt16();
		int32_t ReadInt32();
		uint32_t ReadUInt32();
		int64_t ReadInt64();
		uint64_t ReadUInt64();
		mscorlib::System::Decimal ReadDecimal();
		float ReadSingle();
		double ReadDouble();
		mscorlib::System::String* ReadString();
		wchar_t ReadChar();
		bool ReadBoolean();
		IL2CPP::Array<uint8_t>* ReadBytes(int32_t count);
		IL2CPP::Array<uint8_t>* ReadBytesAndSize();
		UnityEngine_CoreModule::UnityEngine::Vector2 ReadVector2();
		UnityEngine_CoreModule::UnityEngine::Vector3 ReadVector3();
		UnityEngine_CoreModule::UnityEngine::Vector4 ReadVector4();
		UnityEngine_CoreModule::UnityEngine::Color ReadColor();
		UnityEngine_CoreModule::UnityEngine::Color32 ReadColor32();
		UnityEngine_CoreModule::UnityEngine::Quaternion ReadQuaternion();
		UnityEngine_CoreModule::UnityEngine::Rect ReadRect();
		UnityEngine_CoreModule::UnityEngine::Plane ReadPlane();
		UnityEngine_CoreModule::UnityEngine::Ray ReadRay();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ReadMatrix4x4();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 ReadNetworkHash128();
		UnityEngine_CoreModule::UnityEngine::Transform* ReadTransform();
		UnityEngine_CoreModule::UnityEngine::GameObject* ReadGameObject();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* ReadNetworkIdentity();
		mscorlib::System::String* ToString();
		template <typename TMsg> TMsg* ReadMessage()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadMessage");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TMsg::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TMsg>(returnValue);;
		}
	};
}


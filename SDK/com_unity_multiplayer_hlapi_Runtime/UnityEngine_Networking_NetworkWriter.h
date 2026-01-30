#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetBuffer; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "UnityEngine_Networking_UIntFloat.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct UIntFloat; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_ArraySegment_1.h"
namespace mscorlib::System { template <typename T> struct ArraySegment_1; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "UnityEngine_Networking_NetworkSceneId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkSceneId; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct String; };
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
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetBuffer* m_Buffer;
		struct StaticFields
		{
			int32_t k_MaxStringLength;
			mscorlib::System::Text::Encoding* s_Encoding;
			IL2CPP::Array<uint8_t>* s_StringWriteBuffer;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UIntFloat s_FloatConverter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* buffer);
		int16_t get_Position();
		IL2CPP::Array<uint8_t>* ToArray();
		IL2CPP::Array<uint8_t>* AsArray();
		mscorlib::System::ArraySegment_1<mscorlib::System::Byte> AsArraySegment();
		void WritePackedUInt32(uint32_t value);
		void WritePackedUInt64(uint64_t value);
		void Write(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId value);
		void Write(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId value);
		void Write(wchar_t value);
		void Write(uint8_t value);
		void Write(int8_t value);
		void Write(int16_t value);
		void Write(uint16_t value);
		void Write(int32_t value);
		void Write(uint32_t value);
		void Write(int64_t value);
		void Write(uint64_t value);
		void Write(float value);
		void Write(double value);
		void Write(mscorlib::System::Decimal value);
		void Write(mscorlib::System::String* value);
		void Write(bool value);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteBytesAndSize(IL2CPP::Array<uint8_t>* buffer, int32_t count);
		void WriteBytesFull(IL2CPP::Array<uint8_t>* buffer);
		void Write(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void Write(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void Write(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void Write(UnityEngine_CoreModule::UnityEngine::Color value);
		void Write(UnityEngine_CoreModule::UnityEngine::Color32 value);
		void Write(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		void Write(UnityEngine_CoreModule::UnityEngine::Rect value);
		void Write(UnityEngine_CoreModule::UnityEngine::Plane value);
		void Write(UnityEngine_CoreModule::UnityEngine::Ray value);
		void Write(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void Write(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 value);
		void Write(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* value);
		void Write(UnityEngine_CoreModule::UnityEngine::Transform* value);
		void Write(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		void Write(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		void SeekZero();
		void StartMessage(int16_t msgType);
		void FinishMessage();
	};
}


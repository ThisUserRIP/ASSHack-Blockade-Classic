#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP { struct OnRequestFinishedDelegate; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace Assembly_CSharp
{
	struct UTILS : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* tmpBuffer;
			int32_t pos;
			int32_t readlen;
			bool ERROR_;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float ANGLE_SIGNED(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, UnityEngine_CoreModule::UnityEngine::Vector3 n);
		static mscorlib::System::Collections::IEnumerator* PostMyItem(int32_t _type);
		static void DownloadImage(mscorlib::System::String* url, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static mscorlib::System::String* GET_TIMER(int32_t endTime);
		static mscorlib::System::String* GET_SPECIAL_TIMER(int32_t endTime, bool show_seconds);
		static void BEGIN_WRITE(int32_t size);
		static void WRITE_BYTE(uint8_t bvalue);
		static void WRITE_SHORT(int16_t svalue);
		static void WRITE_FLOAT(float fvalue);
		static void WRITE_LONG(int32_t ivalue);
		static void WRITE_STRING(mscorlib::System::String* svalue);
		static int32_t WRITE_LEN();
		static IL2CPP::Array<uint8_t>* END_WRITE();
		static void BEGIN_READ(IL2CPP::Array<uint8_t>* inBytes, int32_t _pos);
		static int32_t GET_POS();
		static int32_t GET_LEN();
		static uint8_t READ_BYTE();
		static float READ_ANGLE();
		static float READ_COORD();
		static uint16_t READ_SHORT();
		static int32_t READ_LONG();
		static mscorlib::System::String* READ_STRING();
		static IL2CPP::Array<uint8_t>* EncodeShort(int16_t inShort);
		static IL2CPP::Array<uint8_t>* EncodeInteger(int32_t inInt);
		static IL2CPP::Array<uint8_t>* EncodeFloat(float inFloat);
		static IL2CPP::Array<uint8_t>* EncodeStringUTF8(mscorlib::System::String* inString);
		static IL2CPP::Array<uint8_t>* EncodeStringASCII(mscorlib::System::String* inString);
		static IL2CPP::Array<uint8_t>* EncodeVector2(UnityEngine_CoreModule::UnityEngine::Vector2 inObject);
		static IL2CPP::Array<uint8_t>* EncodeVector3(UnityEngine_CoreModule::UnityEngine::Vector3 inObject);
		static IL2CPP::Array<uint8_t>* EncodeVector4(UnityEngine_CoreModule::UnityEngine::Vector4 inObject);
		static IL2CPP::Array<uint8_t>* EncodeQuaternion(UnityEngine_CoreModule::UnityEngine::Quaternion inObject);
		static IL2CPP::Array<uint8_t>* EncodeColor(UnityEngine_CoreModule::UnityEngine::Color inObject);
		static uint16_t DecodeShort(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		static int32_t DecodeInteger(IL2CPP::Array<uint8_t>* inBytes, int32_t pos);
		static mscorlib::System::String* DecodeString(IL2CPP::Array<uint8_t>* inBytes);
		static float XRES(float val);
		static float YRES(float val);
		void _ctor();
		static void _cctor();
	};
}


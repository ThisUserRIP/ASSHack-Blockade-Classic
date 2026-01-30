#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_ArraySegment_1.h"
namespace mscorlib::System { template <typename T> struct ArraySegment_1; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct String; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* m_Buffer;
		uint32_t m_Pos;
		struct StaticFields
		{
			int32_t k_InitialSize;
			float k_GrowthFactor;
			int32_t k_BufferSizeWarning;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		uint32_t get_Position();
		int32_t get_Length();
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* buffer);
		uint8_t ReadByte();
		void ReadBytes(IL2CPP::Array<uint8_t>* buffer, uint32_t count);
		mscorlib::System::ArraySegment_1<mscorlib::System::Byte> AsArraySegment();
		void WriteByte(uint8_t value);
		void WriteByte2(uint8_t value0, uint8_t value1);
		void WriteByte4(uint8_t value0, uint8_t value1, uint8_t value2, uint8_t value3);
		void WriteByte8(uint8_t value0, uint8_t value1, uint8_t value2, uint8_t value3, uint8_t value4, uint8_t value5, uint8_t value6, uint8_t value7);
		void WriteBytesAtOffset(IL2CPP::Array<uint8_t>* buffer, uint16_t targetOffset, uint16_t count);
		void WriteBytes(IL2CPP::Array<uint8_t>* buffer, uint16_t count);
		void WriteCheckForSpace(uint16_t count);
		void FinishMessage();
		void SeekZero();
		void Replace(IL2CPP::Array<uint8_t>* buffer);
		mscorlib::System::String* ToString();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_traceloggingId;
		uint16_t m_id;
		uint8_t m_version;
		uint8_t m_channel;
		uint8_t m_level;
		uint8_t m_opcode;
		uint16_t m_task;
		int64_t m_keywords;
		void _ctor(int32_t traceloggingId, uint8_t level, uint8_t opcode, int64_t keywords);
		void _ctor(int32_t id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int32_t task, int64_t keywords);
		int32_t get_EventId();
		uint8_t get_Version();
		uint8_t get_Channel();
		uint8_t get_Level();
		uint8_t get_Opcode();
		int32_t get_Task();
		int64_t get_Keywords();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Diagnostics::Tracing::EventDescriptor other);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace System::System::Diagnostics { struct Stopwatch; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Voice : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		IL2CPP::Array<uint8_t>* ReadCompressedBuffer;
		IL2CPP::Array<uint8_t>* ReadUncompressedBuffer;
		IL2CPP::Array<uint8_t>* UncompressBuffer;
		mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, mscorlib::System::Int32>* OnCompressedData;
		mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, mscorlib::System::Int32>* OnUncompressedData;
		System::System::Diagnostics::Stopwatch* UpdateTimer;
		bool _wantsrecording;
		mscorlib::System::DateTime _LastVoiceRecordTime_k__BackingField;
		bool IsRecording;
		uint32_t DesiredSampleRate;
		struct StaticFields
		{
			int32_t ReadBufferSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		uint32_t get_OptimalSampleRate();
		void set_LastVoiceRecordTime(mscorlib::System::DateTime value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* client);
		void Update();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::IO { struct MemoryStream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	struct Streams : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t BufferSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void Drain(mscorlib::System::IO::Stream* inStr);
		static IL2CPP::Array<uint8_t>* ReadAll(mscorlib::System::IO::Stream* inStr);
		static IL2CPP::Array<uint8_t>* ReadAllLimited(mscorlib::System::IO::Stream* inStr, int32_t limit);
		static int32_t ReadFully(mscorlib::System::IO::Stream* inStr, IL2CPP::Array<uint8_t>* buf);
		static int32_t ReadFully(mscorlib::System::IO::Stream* inStr, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		static void PipeAll(mscorlib::System::IO::Stream* inStr, mscorlib::System::IO::Stream* outStr);
		static int64_t PipeAllLimited(mscorlib::System::IO::Stream* inStr, int64_t limit, mscorlib::System::IO::Stream* outStr);
		static void WriteBufTo(mscorlib::System::IO::MemoryStream* buf, mscorlib::System::IO::Stream* output);
		static int32_t WriteBufTo(mscorlib::System::IO::MemoryStream* buf, IL2CPP::Array<uint8_t>* output, int32_t offset);
		static void WriteZeroes(mscorlib::System::IO::Stream* outStr, int64_t count);
	};
}


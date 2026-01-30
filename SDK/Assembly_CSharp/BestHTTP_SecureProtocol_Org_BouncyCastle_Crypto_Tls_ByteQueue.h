#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct MemoryStream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct ByteQueue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* databuf;
		int32_t skipped;
		int32_t available;
		bool readOnlyBuf;
		struct StaticFields
		{
			int32_t DefaultCapacity;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t NextTwoPow(int32_t i);
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void AddData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t len);
		int32_t get_Available();
		void CopyTo(mscorlib::System::IO::Stream* output, int32_t length);
		void Read(IL2CPP::Array<uint8_t>* buf, int32_t offset, int32_t len, int32_t skip);
		mscorlib::System::IO::MemoryStream* ReadFrom(int32_t length);
		void RemoveData(int32_t i);
		void RemoveData(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len, int32_t skip);
		IL2CPP::Array<uint8_t>* RemoveData(int32_t len, int32_t skip);
		void Shrink();
	};
}


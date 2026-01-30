#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct JZlib : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* _version;
			int32_t Z_NO_COMPRESSION;
			int32_t Z_BEST_SPEED;
			int32_t Z_BEST_COMPRESSION;
			int32_t Z_DEFAULT_COMPRESSION;
			int32_t Z_FILTERED;
			int32_t Z_HUFFMAN_ONLY;
			int32_t Z_DEFAULT_STRATEGY;
			int32_t Z_NO_FLUSH;
			int32_t Z_PARTIAL_FLUSH;
			int32_t Z_SYNC_FLUSH;
			int32_t Z_FULL_FLUSH;
			int32_t Z_FINISH;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* version();
		void _ctor();
	};
}


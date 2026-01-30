#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct ZlibConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t WindowBitsMax;
			int32_t WindowBitsDefault;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t WorkingBufferSizeDefault;
			int32_t WorkingBufferSizeMin;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}


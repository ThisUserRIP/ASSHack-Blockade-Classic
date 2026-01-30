#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics
{
	struct StackFrame : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ilOffset;
		int32_t nativeOffset;
		int64_t methodAddress;
		uint32_t methodIndex;
		mscorlib::System::Reflection::MethodBase* methodBase;
		mscorlib::System::String* fileName;
		int32_t lineNumber;
		int32_t columnNumber;
		mscorlib::System::String* internalMethodName;
		struct StaticFields
		{
			int32_t OFFSET_UNKNOWN;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_frame_info(int32_t skip, bool needFileInfo, mscorlib::System::Reflection::MethodBase& method, int32_t& iloffset, int32_t& native_offset, mscorlib::System::String& file, int32_t& line, int32_t& column);
		void _ctor();
		void _ctor(int32_t skipFrames, bool fNeedFileInfo);
		int32_t GetFileLineNumber();
		int32_t GetFileColumnNumber();
		mscorlib::System::String* GetFileName();
		mscorlib::System::String* GetSecureFileName();
		int32_t GetILOffset();
		mscorlib::System::Reflection::MethodBase* GetMethod();
		int32_t GetNativeOffset();
		int64_t GetMethodAddress();
		uint32_t GetMethodIndex();
		mscorlib::System::String* GetInternalMethodName();
		mscorlib::System::String* ToString();
	};
}


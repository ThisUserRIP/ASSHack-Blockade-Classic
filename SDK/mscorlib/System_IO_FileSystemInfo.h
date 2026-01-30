#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
#include "System_IO_MonoIOStat.h"
namespace mscorlib::System::IO { struct MonoIOStat; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::IO
{
	struct FileSystemInfo : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::MonoIOStat _data;
		int32_t _dataInitialised;
		mscorlib::System::String* FullPath;
		mscorlib::System::String* OriginalPath;
		mscorlib::System::String* _displayPath;
		struct StaticFields
		{
			int32_t ERROR_INVALID_PARAMETER_;
			int32_t ERROR_ACCESS_DENIED_;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_FullName();
		mscorlib::System::String* get_Name();
		bool get_Exists();
		void Refresh();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_DisplayPath();
		void set_DisplayPath(mscorlib::System::String* value);
	};
}


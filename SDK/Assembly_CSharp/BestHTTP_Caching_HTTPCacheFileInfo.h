#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct BinaryReader; };
namespace mscorlib::System::IO { struct BinaryWriter; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::Caching
{
	struct HTTPCacheFileInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Uri_k__BackingField;
		mscorlib::System::DateTime _LastAccess_k__BackingField;
		int32_t _BodyLength_k__BackingField;
		mscorlib::System::String* _ETag_k__BackingField;
		mscorlib::System::String* _LastModified_k__BackingField;
		mscorlib::System::DateTime _Expires_k__BackingField;
		int64_t _Age_k__BackingField;
		int64_t _MaxAge_k__BackingField;
		mscorlib::System::DateTime _Date_k__BackingField;
		bool _MustRevalidate_k__BackingField;
		mscorlib::System::DateTime _Received_k__BackingField;
		mscorlib::System::String* _ConstructedPath_k__BackingField;
		uint64_t _MappedNameIDX_k__BackingField;
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		mscorlib::System::DateTime get_LastAccess();
		void set_LastAccess(mscorlib::System::DateTime value);
		int32_t get_BodyLength();
		void set_BodyLength(int32_t value);
		mscorlib::System::String* get_ETag();
		void set_ETag(mscorlib::System::String* value);
		mscorlib::System::String* get_LastModified();
		void set_LastModified(mscorlib::System::String* value);
		mscorlib::System::DateTime get_Expires();
		void set_Expires(mscorlib::System::DateTime value);
		int64_t get_Age();
		void set_Age(int64_t value);
		int64_t get_MaxAge();
		void set_MaxAge(int64_t value);
		mscorlib::System::DateTime get_Date();
		void set_Date(mscorlib::System::DateTime value);
		bool get_MustRevalidate();
		void set_MustRevalidate(bool value);
		mscorlib::System::DateTime get_Received();
		void set_Received(mscorlib::System::DateTime value);
		mscorlib::System::String* get_ConstructedPath();
		void set_ConstructedPath(mscorlib::System::String* value);
		uint64_t get_MappedNameIDX();
		void set_MappedNameIDX(uint64_t value);
		void _ctor(System::System::Uri* uri);
		void _ctor(System::System::Uri* uri, mscorlib::System::DateTime lastAcces, int32_t bodyLength);
		void _ctor(System::System::Uri* uri, mscorlib::System::IO::BinaryReader* reader, int32_t version);
		void SaveTo(mscorlib::System::IO::BinaryWriter* writer);
		mscorlib::System::String* GetPath();
		bool IsExists();
		void Delete();
		void Reset();
		void SetUpCachingValues(Assembly_CSharp::BestHTTP::HTTPResponse* response);
		bool WillExpireInTheFuture();
		void SetUpRevalidationHeaders(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		mscorlib::System::IO::Stream* GetBodyStream(int32_t& length);
		Assembly_CSharp::BestHTTP::HTTPResponse* ReadResponseTo(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		void Store(Assembly_CSharp::BestHTTP::HTTPResponse* response);
		mscorlib::System::IO::Stream* GetSaveStream(Assembly_CSharp::BestHTTP::HTTPResponse* response);
		int32_t CompareTo(Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* other);
	};
}


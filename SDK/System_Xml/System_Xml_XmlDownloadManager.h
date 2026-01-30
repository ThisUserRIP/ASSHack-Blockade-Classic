#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System { struct Uri; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct IWebProxy; };
namespace System::System::Net::Cache { struct RequestCachePolicy; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System_Xml::System::Xml
{
	struct XmlDownloadManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* connections;
		mscorlib::System::IO::Stream* GetStream(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy);
		mscorlib::System::IO::Stream* GetNonFileStream(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy);
		void Remove(mscorlib::System::String* host);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* GetStreamAsync(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* GetNonFileStreamAsync(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy);
		void _ctor();
	};
}


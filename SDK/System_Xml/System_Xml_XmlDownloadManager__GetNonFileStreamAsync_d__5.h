#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlDownloadManager.h"
namespace System_Xml::System::Xml { struct XmlDownloadManager; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
namespace System::System { struct Uri; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct IWebProxy; };
namespace System::System::Net::Cache { struct RequestCachePolicy; };
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct WebResponse; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System_Xml::System::Xml
{
	struct XmlDownloadManager__GetNonFileStreamAsync_d__5
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::IO::Stream> __t__builder;
		System::System::Uri* uri;
		System::System::Net::ICredentials* credentials;
		System::System::Net::IWebProxy* proxy;
		System::System::Net::Cache::RequestCachePolicy* cachePolicy;
		System::System::Net::WebRequest* _req_5__1;
		System_Xml::System::Xml::XmlDownloadManager* __4__this;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<System::System::Net::WebResponse> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


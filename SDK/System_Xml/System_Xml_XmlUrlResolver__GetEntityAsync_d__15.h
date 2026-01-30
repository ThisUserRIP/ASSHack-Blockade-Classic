#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlUrlResolver.h"
namespace System_Xml::System::Xml { struct XmlUrlResolver; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
namespace System::System { struct Uri; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System_Xml::System::Xml
{
	struct XmlUrlResolver__GetEntityAsync_d__15
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Object> __t__builder;
		mscorlib::System::Type* ofObjectToReturn;
		System::System::Uri* absoluteUri;
		System_Xml::System::Xml::XmlUrlResolver* __4__this;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::IO::Stream> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


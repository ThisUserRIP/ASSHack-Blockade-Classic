#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_HttpWebRequest.h"
namespace System::System::Net { struct HttpWebRequest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct HttpWebResponse; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct BufferOffsetSize; };
namespace System::System::Net { struct WebOperation; };
#include "..\mscorlib\System_ValueTuple_5.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
namespace System::System::Net { struct WebResponseStream; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace System::System::Net { struct WebException; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::System::Net
{
	struct HttpWebRequest__GetResponseFromData_d__237
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::ValueTuple_5<System::Net::HttpWebResponse, mscorlib::System::Boolean, mscorlib::System::Boolean, System::Net::BufferOffsetSize, System::Net::WebOperation>> __t__builder;
		System::Net::HttpWebRequest* __4__this;
		System::Net::WebResponseStream* stream;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		System::Net::WebException* _throwMe_5__1;
		mscorlib::System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>* _rewriteHandler_5__2;
		bool _redirect_5__3;
		System::Net::HttpWebResponse* _response_5__4;
		System::Net::BufferOffsetSize* _writeBuffer_5__5;
		bool _mustReadAll_5__6;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<System::Net::BufferOffsetSize> __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


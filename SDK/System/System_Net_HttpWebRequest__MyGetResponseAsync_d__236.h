#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_HttpWebRequest.h"
namespace System::System::Net { struct HttpWebRequest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct HttpWebResponse; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace System::System::Net { struct WebOperation; };
namespace System::System::Net { struct WebException; };
namespace System::System::Net { struct WebCompletionSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct WebResponseStream; };
namespace System::System::Net { struct BufferOffsetSize; };
namespace System::System::Net { struct WebRequestStream; };
#include "..\mscorlib\System_Runtime_CompilerServices_TaskAwaiter_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct TaskAwaiter_1; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_ValueTuple_5.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::System::Net
{
	struct HttpWebRequest__MyGetResponseAsync_d__236
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse> __t__builder;
		System::Net::HttpWebRequest* __4__this;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		System::Net::WebOperation* _operation_5__1;
		System::Net::WebException* _throwMe_5__2;
		System::Net::WebCompletionSource* _completion_5__3;
		bool _redirect_5__4;
		System::Net::HttpWebResponse* _response_5__5;
		System::Net::WebOperation* _ntlm_5__6;
		bool _mustReadAll_5__7;
		System::Net::WebResponseStream* _stream_5__8;
		System::Net::BufferOffsetSize* _writeBuffer_5__9;
		mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebRequestStream> __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
		mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream> __u__3;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::ValueTuple_5<System::Net::HttpWebResponse, mscorlib::System::Boolean, mscorlib::System::Boolean, System::Net::BufferOffsetSize, System::Net::WebOperation>> __u__4;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


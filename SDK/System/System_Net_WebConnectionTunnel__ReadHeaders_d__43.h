#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebConnectionTunnel.h"
namespace System::System::Net { struct WebConnectionTunnel; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct WebHeaderCollection; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_ValueTuple_3.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct ValueTuple_3; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::System::Net
{
	struct WebConnectionTunnel__ReadHeaders_d__43
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::ValueTuple_3<System::Net::WebHeaderCollection, IL2CPP::Array<mscorlib::System::Byte>, mscorlib::System::Int32>> __t__builder;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		mscorlib::System::IO::Stream* stream;
		IL2CPP::Array<uint8_t>* _buffer_5__1;
		mscorlib::System::IO::MemoryStream* _ms_5__2;
		System::Net::WebConnectionTunnel* __4__this;
		IL2CPP::Array<uint8_t>* _retBuffer_5__3;
		int32_t _status_5__4;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Int32> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


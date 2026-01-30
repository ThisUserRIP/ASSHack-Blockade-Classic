#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct HttpWebRequest; };
namespace System::System::Net { struct WebConnection; };
namespace System::System::Net { struct ServicePoint; };
namespace System::System::Net { struct BufferOffsetSize; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct CancellationTokenSource; };
namespace System::System::Net { struct WebRequestStream; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskCompletionSource_1; };
namespace System::System::Net { struct WebResponseStream; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct WebOperation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::HttpWebRequest* _Request_k__BackingField;
		System::Net::WebConnection* _Connection_k__BackingField;
		System::Net::ServicePoint* _ServicePoint_k__BackingField;
		System::Net::BufferOffsetSize* _WriteBuffer_k__BackingField;
		bool _IsNtlmChallenge_k__BackingField;
		mscorlib::System::Threading::CancellationTokenSource* cts;
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<System::Net::WebRequestStream>* requestTask;
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<System::Net::WebRequestStream>* requestWrittenTask;
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<System::Net::WebResponseStream>* responseTask;
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<mscorlib::System::Boolean>* completeResponseReadTask;
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<mscorlib::System::ValueTuple_2<mscorlib::System::Boolean, System::Net::WebOperation>>* finishedTask;
		System::Net::WebRequestStream* writeStream;
		System::Net::WebResponseStream* responseStream;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* disposedInfo;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* closedInfo;
		System::Net::WebOperation* priorityRequest;
		bool finishedReading;
		int32_t requestSent;
		System::Net::HttpWebRequest* get_Request();
		System::Net::WebConnection* get_Connection();
		void set_Connection(System::Net::WebConnection* value);
		System::Net::ServicePoint* get_ServicePoint();
		void set_ServicePoint(System::Net::ServicePoint* value);
		System::Net::BufferOffsetSize* get_WriteBuffer();
		bool get_IsNtlmChallenge();
		void _ctor(System::Net::HttpWebRequest* request, System::Net::BufferOffsetSize* writeBuffer, bool isNtlmChallenge, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool get_Aborted();
		bool get_Closed();
		void Abort();
		void Close();
		void SetCanceled();
		void SetError(mscorlib::System::Exception* error);
		mscorlib::System::ValueTuple_2<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo, mscorlib::System::Boolean> SetDisposed(mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo& field);
		void ThrowIfDisposed();
		void ThrowIfDisposed(mscorlib::System::Threading::CancellationToken cancellationToken);
		void ThrowIfClosedOrDisposed();
		void ThrowIfClosedOrDisposed(mscorlib::System::Threading::CancellationToken cancellationToken);
		void ThrowDisposed(mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo& field);
		void RegisterRequest(System::Net::ServicePoint* servicePoint, System::Net::WebConnection* connection);
		void SetPriorityRequest(System::Net::WebOperation* operation);
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebRequestStream>* GetRequestStream();
		System::Net::WebRequestStream* get_WriteStream();
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebResponseStream>* GetResponseStream();
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Boolean, System::Net::WebOperation>>* WaitForCompletion(bool ignoreErrors);
		void Run();
		void FinishReading();
		void CompleteRequestWritten(System::Net::WebRequestStream* stream, mscorlib::System::Exception* error);
		void CompleteResponseRead(bool ok, mscorlib::System::Exception* error);
		void _RegisterRequest_b__46_0();
	};
}


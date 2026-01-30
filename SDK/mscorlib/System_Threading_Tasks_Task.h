#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading::Tasks { struct StackGuard; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading::Tasks { struct TaskFactory; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Threading::Tasks { struct Task_ContingentProperties; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System { struct Delegate; };
#include "System_Threading_Tasks_InternalTaskOptions.h"
namespace mscorlib::System::Threading::Tasks { struct TaskContinuation; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System { struct AggregateException; };
#include "System_Threading_Tasks_TaskStatus.h"
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System::Threading { struct ManualResetEventSlim; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };
namespace mscorlib::System { struct Exception; };
#include "System_Runtime_CompilerServices_TaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct TaskAwaiter; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable; };
namespace mscorlib::System { struct Action; };
#include "System_Threading_Tasks_TaskContinuationOptions.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System::Threading::Tasks { struct ITaskCompletionAction; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { struct OperationCanceledException; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_taskId;
		mscorlib::System::Object* m_action;
		mscorlib::System::Object* m_stateObject;
		mscorlib::System::Threading::Tasks::TaskScheduler* m_taskScheduler;
		mscorlib::System::Threading::Tasks::Task* m_parent;
		int32_t m_stateFlags;
		mscorlib::System::Object* m_continuationObject;
		mscorlib::System::Threading::Tasks::Task_ContingentProperties* m_contingentProperties;
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::Task* t_currentTask;
			mscorlib::System::Threading::Tasks::StackGuard* t_stackGuard;
			int32_t s_taskIdCounter;
			mscorlib::System::Threading::Tasks::TaskFactory* s_factory;
			int32_t OptionsMask;
			int32_t TASK_STATE_STARTED;
			int32_t TASK_STATE_DELEGATE_INVOKED;
			int32_t TASK_STATE_DISPOSED;
			int32_t TASK_STATE_EXCEPTIONOBSERVEDBYPARENT;
			int32_t TASK_STATE_CANCELLATIONACKNOWLEDGED;
			int32_t TASK_STATE_FAULTED;
			int32_t TASK_STATE_CANCELED;
			int32_t TASK_STATE_WAITING_ON_CHILDREN;
			int32_t TASK_STATE_RAN_TO_COMPLETION;
			int32_t TASK_STATE_WAITINGFORACTIVATION;
			int32_t TASK_STATE_COMPLETION_RESERVED;
			int32_t TASK_STATE_THREAD_WAS_ABORTED;
			int32_t TASK_STATE_WAIT_COMPLETION_NOTIFICATION;
			int32_t TASK_STATE_EXECUTIONCONTEXT_IS_NULL;
			int32_t TASK_STATE_TASKSCHEDULED_WAS_FIRED;
			int32_t TASK_STATE_COMPLETED_MASK;
			int32_t CANCELLATION_REQUESTED;
			mscorlib::System::Object* s_taskCompletionSentinel;
			bool s_asyncDebuggingEnabled;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Threading::Tasks::Task>* s_currentActiveTasks;
			mscorlib::System::Object* s_activeTasksLock;
			mscorlib::System::Action_1<mscorlib::System::Object>* s_taskCancelCallback;
			mscorlib::System::Func_1<mscorlib::System::Threading::Tasks::Task_ContingentProperties>* s_createContingentProperties;
			mscorlib::System::Threading::Tasks::Task* s_completedTask;
			mscorlib::System::Predicate_1<mscorlib::System::Threading::Tasks::Task>* s_IsExceptionObservedByParentPredicate;
			mscorlib::System::Threading::ContextCallback* s_ecCallback;
			mscorlib::System::Predicate_1<mscorlib::System::Object>* s_IsTaskContinuationNullPredicate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool AddToActiveTasks(mscorlib::System::Threading::Tasks::Task* task);
		static void RemoveFromActiveTasks(int32_t taskId);
		void _ctor(bool canceled, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::CancellationToken ct);
		void _ctor();
		void _ctor(mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle);
		void _ctor(mscorlib::System::Delegate* action, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		void TaskConstructorCore(mscorlib::System::Object* action, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		void AssignCancellationToken(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::Task* antecedent, mscorlib::System::Threading::Tasks::TaskContinuation* continuation);
		static void TaskCancelCallback(mscorlib::System::Object* o);
		void PossiblyCaptureContext(mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Threading::Tasks::TaskCreationOptions get_Options();
		static mscorlib::System::Threading::Tasks::TaskCreationOptions OptionsMethod(int32_t flags);
		bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits);
		bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits, int32_t& oldFlags);
		void SetNotificationForWaitCompletion(bool enabled);
		bool NotifyDebuggerOfWaitCompletionIfNecessary();
		bool get_IsWaitNotificationEnabledOrNotRanToCompletion();
		bool get_ShouldNotifyDebuggerOfWaitCompletion();
		bool get_IsWaitNotificationEnabled();
		void NotifyDebuggerOfWaitCompletion();
		bool MarkStarted();
		bool FireTaskScheduledIfNeeded(mscorlib::System::Threading::Tasks::TaskScheduler* ts);
		void AddNewChild();
		void DisregardChild();
		static mscorlib::System::Threading::Tasks::Task* InternalStartNew(mscorlib::System::Threading::Tasks::Task* creatingTask, mscorlib::System::Delegate* action, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::Tasks::TaskCreationOptions options, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static int32_t NewId();
		int32_t get_Id();
		static mscorlib::System::Threading::Tasks::Task* get_InternalCurrent();
		static mscorlib::System::Threading::Tasks::Task* InternalCurrentIfAttached(mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions);
		static mscorlib::System::Threading::Tasks::StackGuard* get_CurrentStackGuard();
		mscorlib::System::AggregateException* get_Exception();
		mscorlib::System::Threading::Tasks::TaskStatus get_Status();
		bool get_IsCanceled();
		bool get_IsCancellationRequested();
		mscorlib::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitialized(bool needsProtection);
		mscorlib::System::Threading::Tasks::Task_ContingentProperties* EnsureContingentPropertiesInitializedCore(bool needsProtection);
		mscorlib::System::Threading::CancellationToken get_CancellationToken();
		bool get_IsCancellationAcknowledged();
		bool get_IsCompleted();
		static bool IsCompletedMethod(int32_t flags);
		bool get_IsRanToCompletion();
		mscorlib::System::Threading::Tasks::TaskCreationOptions get_CreationOptions();
		mscorlib::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
		mscorlib::System::Object* get_AsyncState();
		bool System_IAsyncResult_get_CompletedSynchronously();
		mscorlib::System::Threading::Tasks::TaskScheduler* get_ExecutingTaskScheduler();
		static mscorlib::System::Threading::Tasks::TaskFactory* get_Factory();
		static mscorlib::System::Threading::Tasks::Task* get_CompletedTask();
		mscorlib::System::Threading::ManualResetEventSlim* get_CompletedEvent();
		bool get_IsSelfReplicatingRoot();
		bool get_IsChildReplica();
		bool get_ExceptionRecorded();
		bool get_IsFaulted();
		mscorlib::System::Threading::ExecutionContext* get_CapturedContext();
		void set_CapturedContext(mscorlib::System::Threading::ExecutionContext* value);
		static mscorlib::System::Threading::ExecutionContext* CopyExecutionContext(mscorlib::System::Threading::ExecutionContext* capturedContext);
		void Dispose();
		void Dispose(bool disposing);
		void ScheduleAndStart(bool needsProtection);
		void AddException(mscorlib::System::Object* exceptionObject);
		void AddException(mscorlib::System::Object* exceptionObject, bool representsCancellation);
		mscorlib::System::AggregateException* GetExceptions(bool includeTaskCanceledExceptions);
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* GetExceptionDispatchInfos();
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo();
		void ThrowIfExceptional(bool includeTaskCanceledExceptions);
		void UpdateExceptionObservedStatus();
		bool get_IsExceptionObservedByParent();
		bool get_IsDelegateInvoked();
		void Finish(bool bUserDelegateExecuted);
		void FinishStageTwo();
		void FinishStageThree();
		void ProcessChildCompletion(mscorlib::System::Threading::Tasks::Task* childTask);
		void AddExceptionsFromChildren();
		void FinishThreadAbortedTask(bool bTAEAddedToExceptionHolder, bool delegateRan);
		void Execute();
		bool ShouldReplicate();
		mscorlib::System::Threading::Tasks::Task* CreateReplicaTask(mscorlib::System::Action_1<mscorlib::System::Object>* taskReplicaDelegate, mscorlib::System::Object* stateObject, mscorlib::System::Threading::Tasks::Task* parentTask, mscorlib::System::Threading::Tasks::TaskScheduler* taskScheduler, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplica, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplica);
		mscorlib::System::Object* get_SavedStateForNextReplica();
		void set_SavedStateFromPreviousReplica(mscorlib::System::Object* value);
		mscorlib::System::Threading::Tasks::Task* get_HandedOverChildReplica();
		void set_HandedOverChildReplica(mscorlib::System::Threading::Tasks::Task* value);
		static void ExecuteSelfReplicating(mscorlib::System::Threading::Tasks::Task* root);
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
		bool ExecuteEntry(bool bPreventDoubleExecution);
		void ExecuteWithThreadLocal(mscorlib::System::Threading::Tasks::Task& currentTaskSlot);
		static void ExecutionContextCallback(mscorlib::System::Object* obj);
		void InnerInvoke();
		void InnerInvokeWithArg(mscorlib::System::Threading::Tasks::Task* childTask);
		void HandleException(mscorlib::System::Exception* unhandledException);
		mscorlib::System::Runtime::CompilerServices::TaskAwaiter GetAwaiter();
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext);
		void SetContinuationForAwait(mscorlib::System::Action* continuationAction, bool continueOnCapturedContext, bool flowExecutionContext, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void Wait();
		bool Wait(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool WrappedTryRunInline();
		bool InternalWait(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool SpinThenBlockingWait(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool SpinWait(int32_t millisecondsTimeout);
		bool InternalCancel(bool bCancelNonExecutingOnly);
		void RecordInternalCancellationRequest();
		void RecordInternalCancellationRequest(mscorlib::System::Threading::CancellationToken tokenToRecord);
		void RecordInternalCancellationRequest(mscorlib::System::Threading::CancellationToken tokenToRecord, mscorlib::System::Object* cancellationException);
		void CancellationCleanupLogic();
		void SetCancellationAcknowledged();
		void FinishContinuations();
		void LogFinishCompletionNotification();
		mscorlib::System::Threading::Tasks::Task* ContinueWith(mscorlib::System::Action_1<mscorlib::System::Threading::Tasks::Task>* continuationAction);
		mscorlib::System::Threading::Tasks::Task* ContinueWith(mscorlib::System::Action_1<mscorlib::System::Threading::Tasks::Task>* continuationAction, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Threading::Tasks::Task* ContinueWith(mscorlib::System::Action_2<mscorlib::System::Threading::Tasks::Task, mscorlib::System::Object>* continuationAction, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		mscorlib::System::Threading::Tasks::Task* ContinueWith(mscorlib::System::Action_2<mscorlib::System::Threading::Tasks::Task, mscorlib::System::Object>* continuationAction, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static void CreationOptionsFromContinuationOptions(mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::Tasks::TaskCreationOptions& creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions& internalOptions);
		void ContinueWithCore(mscorlib::System::Threading::Tasks::Task* continuationTask, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions options);
		void AddCompletionAction(mscorlib::System::Threading::Tasks::ITaskCompletionAction* action);
		void AddCompletionAction(mscorlib::System::Threading::Tasks::ITaskCompletionAction* action, bool addBeforeOthers);
		bool AddTaskContinuationComplex(mscorlib::System::Object* tc, bool addBeforeOthers);
		bool AddTaskContinuation(mscorlib::System::Object* tc, bool addBeforeOthers);
		void RemoveContinuation(mscorlib::System::Object* continuationObject);
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromResult(TResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromResult", std::vector<std::string> { GetGenericTypeName<TResult>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task* FromException(mscorlib::System::Exception* exception);
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromException(mscorlib::System::Exception* exception)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromException", std::vector<std::string> { "System.Exception" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)exception;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task* FromCancellation(mscorlib::System::Threading::CancellationToken cancellationToken);
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromCancellation(mscorlib::System::Threading::CancellationToken cancellationToken)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromCancellation", std::vector<std::string> { "System.Threading.CancellationToken" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&cancellationToken;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromCancellation(mscorlib::System::OperationCanceledException* exception)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromCancellation", std::vector<std::string> { "System.OperationCanceledException" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)exception;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task* Run(mscorlib::System::Action* action);
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* Run(mscorlib::System::Func_1<TResult>* function)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Func`1<TResult>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)function;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* Run(mscorlib::System::Func_1<mscorlib::System::Threading::Tasks::Task_1<TResult>>* function)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Func`1<System.Threading.Tasks.Task`1<TResult>>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)function;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* Run(mscorlib::System::Func_1<mscorlib::System::Threading::Tasks::Task_1<TResult>>* function, mscorlib::System::Threading::CancellationToken cancellationToken)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Func`1<System.Threading.Tasks.Task`1<TResult>>", "System.Threading.CancellationToken" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)function;
			params[1] = (intptr_t)&cancellationToken;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task* Delay(int32_t millisecondsDelay);
		static mscorlib::System::Threading::Tasks::Task* Delay(int32_t millisecondsDelay, mscorlib::System::Threading::CancellationToken cancellationToken);
		static mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>* WhenAny(IL2CPP::Array<mscorlib::System::Threading::Tasks::Task*>* tasks);
		static mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>* WhenAny(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Threading::Tasks::Task>* tasks);
		static void _cctor();
	};
}


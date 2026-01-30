#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct Stopwatch; };
namespace mscorlib::System::Threading { struct Thread; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Action; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct ThreadHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::Stopwatch* onMaZKmZFzRtdUDRarezrSiPPWM;
		mscorlib::System::Threading::Thread* KwVWyZzMvZjWlDpaDNWXktuQbUz;
		mscorlib::System::Threading::ManualResetEvent* onCsOObwSqheWAiYrMNPBnBBBfCg;
		mscorlib::System::Threading::ManualResetEvent* jzmdJRMAfsFiKXlgkErijofRCEnJ;
		mscorlib::System::Threading::AutoResetEvent* gulEiDmieQvfzdShaOexcptuCyv;
		bool GpMdylAgJiqBQIsyGKjeIysRRLvN;
		bool VFDDUDrxnOAkGqUAUGBGYukRBjk;
		int32_t jOVgrkcAivzcjQeIqaOTbrRLKNp;
		bool ZtkEMXbTpVgYRcVTaCmCCSSbGTB;
		int32_t YMvwryTMRKehDtbaiCmYeIPoYpg;
		int64_t hdXXBTYxZLshGoJSJzVXtByFRLJ;
		bool NAofFgJHfAdlmVeWzitPmiZUDWBh;
		int32_t IrVWhDIGouXiypmSYIzdCfPqGIY;
		int64_t XidGklIzjBXWCsMQeQwnFHWKXcpa;
		uint32_t broczliXyXwGIxIvShmOLJkbNnnm;
		mscorlib::System::Object* qFhkEWlFbNBFHKeISChvDpDoYOi;
		System::System::Collections::Generic::Queue_1<mscorlib::System::Action>* kJvHdvxSRnfKnTiAECmFcBtLwbec;
		System::System::Collections::Generic::Queue_1<mscorlib::System::Action>* RrdwNQbCkedtGsorvfylyarbuvW;
		bool byBWcczSSlBwgOqUTONKWxXeShZ;
		mscorlib::System::Action* OqdRoydkizJaKlAokWJcjYIdsih;
		mscorlib::System::Action* hVLGvkzcQvpIzrFMGQVRujKTwPr;
		mscorlib::System::Action* hmgFKyjSbhKOGbURillfIBmPglfQ;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			uint32_t SFNUCZGhrtnnGvAZyJtdPYHNgho;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* Create(bool fixedTimeStep, int32_t fixedTimeStepFPS, bool useHighPrecisionTimer, int32_t timeoutMS);
		static Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* CreateFixedTimeStep(int32_t timeStepFPS, int32_t timeoutMS);
		static Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* CreateFixedTimeStep(int32_t timeStepFPS, bool useHighPrecisionTimer, int32_t timeoutMS);
		bool get_isRunning();
		bool get_isStopped();
		bool get_useHighPrecitionTimer();
		void set_useHighPrecitionTimer(bool value);
		bool get_useFixedTimeStep();
		int32_t get_fixedTimeStepFPS();
		void set_fixedTimeStepFPS(int32_t value);
		int32_t get_timeoutMS();
		void set_timeoutMS(int32_t value);
		uint32_t get_tick();
		void add_ThreadUpdateEvent(mscorlib::System::Action* value);
		void remove_ThreadUpdateEvent(mscorlib::System::Action* value);
		void LLfOxMBcfvPwjOrAcbvzTxyIEcw(mscorlib::System::Action* A_1);
		void EPkvRSJFctoJyohQREmtdaKslaQm(mscorlib::System::Action* A_1);
		void add_ThreadStartedEvent(mscorlib::System::Action* value);
		void remove_ThreadStartedEvent(mscorlib::System::Action* value);
		void acQBUVGqeUgBNTIoVkaLGMdgPrf(mscorlib::System::Action* A_1);
		void sYkpGUVseVfqWkTMsCeSkNwVoMh(mscorlib::System::Action* A_1);
		void add_ThreadPreStopEvent(mscorlib::System::Action* value);
		void remove_ThreadPreStopEvent(mscorlib::System::Action* value);
		void _ctor();
		void _ctor(int32_t timeoutMS);
		void _ctor(int32_t fixedTimeStepFPS, bool useHighPrecisionTimer, int32_t timeoutMS);
		bool Start(bool wait);
		void Stop(bool wait);
		bool EnqueueAction(mscorlib::System::Action* action);
		bool InvokeActionSync(mscorlib::System::Action* action);
		void WaitForActionQueueToFinish();
		void ResetTimeout();
		void FrgkDWnGvcsMWylJaEuRDuxJoQI();
		void dybJPTMmjvKHRVnpdexWBSswPVvb();
		void QlLzFdrOCjWIdzciDgXbuaOptKC();
		void RVmVHnmrefqJCLIeZpYvEzXemxN();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
		static void WvAwQVLLLHUnUmsGwLDXxxACRAb(mscorlib::System::Object* A_0);
	};
}


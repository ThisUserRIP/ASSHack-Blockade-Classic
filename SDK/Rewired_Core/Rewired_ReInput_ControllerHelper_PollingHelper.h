#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput_ControllerHelper.h"
namespace Rewired_Core::Rewired { struct ReInput_ControllerHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace Rewired_Core::Rewired
{
	struct ReInput_ControllerHelper_PollingHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper* get_Instance();
		void _ctor();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersForFirstElement();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersForFirstElementDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersForFirstButton();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersForFirstButtonDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersForFirstAxis();
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstElement(Rewired_Core::Rewired::ControllerType controllerType);
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstElementDown(Rewired_Core::Rewired::ControllerType controllerType);
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstButton(Rewired_Core::Rewired::ControllerType controllerType);
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstButtonDown(Rewired_Core::Rewired::ControllerType controllerType);
		Rewired_Core::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstAxis(Rewired_Core::Rewired::ControllerType controllerType);
		Rewired_Core::Rewired::ControllerPollingInfo PollControllerForFirstElement(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerPollingInfo PollControllerForFirstElementDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerPollingInfo PollControllerForFirstButton(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerPollingInfo PollControllerForFirstButtonDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerPollingInfo PollControllerForFirstAxis(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollAllControllersForAllElements();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollAllControllersForAllElementsDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollAllControllersForAllButtons();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollAllControllersForAllButtonsDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollAllControllersForAllAxes();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollControllerForAllElements(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollControllerForAllElementsDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollControllerForAllButtons(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollControllerForAllButtonsDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollControllerForAllAxes(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerPollingInfo ETeNaMsWRsmOyulAMcCQgIfGKQQ();
		Rewired_Core::Rewired::ControllerPollingInfo CugazxqRYCeOnDjSCCXNTIjusqXa();
		Rewired_Core::Rewired::ControllerPollingInfo kIZcgyhGPbhPgHbHMzUInWUcIbT();
		Rewired_Core::Rewired::ControllerPollingInfo ahWWVHxRuIpiitQTdtpvEREXlXH();
		Rewired_Core::Rewired::ControllerPollingInfo zQjkBmQqITvNSBPAfFymwnvOfZSd();
		Rewired_Core::Rewired::ControllerPollingInfo AJygVSFPwDUJTMprfhzlpxhcYbrg(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo AnOqcCPvtPnBgBsTGPCyNpVYLRW(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo ozZNRJZDQiEGSdrRJpTIiCrqNgks(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo awTbyHVVhAHPkVPVPZYJmpPUPQT(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo FzwfGNpVpuBzESpYtnsXpHZUgxL(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo mpMcSUfNONSXNRmxOuNfwaZsfeS();
		Rewired_Core::Rewired::ControllerPollingInfo FIenWoVeVAnOboHkDdXOgNQLfzaL();
		Rewired_Core::Rewired::ControllerPollingInfo ESvfEvfNRCLVnGtFOeSVIEUGzYh();
		Rewired_Core::Rewired::ControllerPollingInfo JAgvrUkbrEtpSZIeGaVqORTHbiFC();
		Rewired_Core::Rewired::ControllerPollingInfo NCEManUwycEvMjWjHfCjfPxcaCua();
		Rewired_Core::Rewired::ControllerPollingInfo fbCRpGbcUzLUEGsGDgBhKKuKzXz();
		Rewired_Core::Rewired::ControllerPollingInfo JbwyCuKLvdnqwmhyztxrqNFvFZV();
		Rewired_Core::Rewired::ControllerPollingInfo HVtheOMZJNuqsqegSiCCKITtooDv();
		Rewired_Core::Rewired::ControllerPollingInfo uyEvTyACzXbTTjZlMfJMezujUQFH();
		Rewired_Core::Rewired::ControllerPollingInfo YZRGjmBkdFhYabsMoCkpRiOgzJk();
		Rewired_Core::Rewired::ControllerPollingInfo ixTOdCHbqWaqIItvEYJsWYjqrHU();
		Rewired_Core::Rewired::ControllerPollingInfo DgZesSeEcRRQPdlMyncPGGnJpJFX();
		Rewired_Core::Rewired::ControllerPollingInfo DFoAAFCCqiaDSCkzilmCOjQlyHjY(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo dlIeoWaGZZwJrhQwiKnyzVVPxsuq(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo wWhAGKfrizUCASyFBiXaPrmZDeVh(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo poCnlrmcwJEvEVGNyBNkCfqTtNGn(int32_t A_1);
		Rewired_Core::Rewired::ControllerPollingInfo JkaUDSLmPpNaTiMvFtdzgiNuCNT(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* bHRaoNGVZdWYOCGfZcZjlKtNTtCk();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* MtgLHcCCZcaYipPknCjXjmSfwhI();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* ujmGdsAicUnAwPuONTxkAYaUAWZ();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* XvcMOhZvgGwFGAqjtjNwEZGKYUS();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* vDSwbFbtDMsLLKifyBourlQVBNW();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* ctCddSBHcoXpatXZQRgcfTFwLUbg(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* egFsSYUqfRCeOZvSOGSDaZnkWvT(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* ITpnYxrBxGCVmfzYLprzqcREOBnG(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* fXRlkVXKTdqpjsCnwSxNxcCLFQh(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* jxCnGWkgcMgQiJfWjAWpWRjUiMiu(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* FXJEeRCHdsmvIxiMThSBfbNoAmh();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* bmLNWeLLWvytRIaKhOvfuJauynq();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* ovMyBqSueCpHkKSkhRAHRnPFYxs();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* aUMUTWcbHFIBmlDRslJQQIgCTNH();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* TsagCaAHJGcMilRFFekhWVWPxwN();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* rQnTiElmqYsOTEBHEgNNrTqpxBc();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* xscNWaPiRtUkFTSJcDhprjMqnPP();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* GknPUMhZSxsRNNvsOBtieSDzNaQ();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* usIdwVOxFHYmoZUjbcolZNcOYOh();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* bNaiPUaiuknXyARPWoDHySnOAYL();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* RneIRdHlakDUAqFSIdrNBNzeBaC();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* RqtZrRlXghnqYwjpvfzperwYUZB();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* BfAdxmcJRHfufgXzkMsScsIxdyVK(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* wNcNcTXCUQGQuGvZlQoeUprXMtbl(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* ztDsNqppgxchPiBGPgkCfesOCFgE(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* tmVGdgCHaczjwFtUCwShtmmRIjFg(int32_t A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* gxmviEvqvzxyQvepknbrymiDRVc(int32_t A_1);
	};
}


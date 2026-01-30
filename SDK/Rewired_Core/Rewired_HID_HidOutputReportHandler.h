#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct ThreadHelper; };
namespace Rewired_Core::Rewired::HID { struct HidOutputReportHandler_yYfDxAriXzAeFAMpFoOlhGUJrNge; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::HID { struct HidOutputReportHandler_WriteReportDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_HID_OutputReport.h"
namespace Rewired_Core::Rewired::HID { struct OutputReport; };

namespace Rewired_Core::Rewired::HID
{
	struct HidOutputReportHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* KwVWyZzMvZjWlDpaDNWXktuQbUz;
		Rewired_Core::Rewired::HID::HidOutputReportHandler_yYfDxAriXzAeFAMpFoOlhGUJrNge* utHbiKEzcxowMUqMAOHePcoFDWb;
		Rewired_Core::Rewired::HID::HidOutputReportHandler_yYfDxAriXzAeFAMpFoOlhGUJrNge* McdkLuZhLUGGCtxIqBKJIwiEAWj;
		bool mPVUfcDAkZlcgJMPkpuCWurAfJg;
		bool sTsfFQGpiuTxwcGSyyoIFiyQkvDc;
		mscorlib::System::Object* macCRYCYItbihWFKZTMhFbaXRqy;
		Rewired_Core::Rewired::HID::HidOutputReportHandler_WriteReportDelegate* ifEcnEPhyPAFubDRBcCNZCWKcqop;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			bool ASKWeMujZtWYIyZuzuiAUyLaDUn;
			int32_t vAEFMcKcdHJFAMmEUtOAmtODQSkL;
			int32_t FiFikvQIHUJBNjBnoXKlapCNcra;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::HID::HidOutputReportHandler_WriteReportDelegate* writeReportDelegate);
		void WriteReport(Rewired_Core::Rewired::HID::OutputReport report);
		void Clear();
		bool cllfSxuDRQBfCCgnGGPMjahCwGdC();
		bool gWRRnusCFafKiOTsuNynyjhAxmW();
		void ZMiTQjLlgNxDWFcdthaOcHUQFjHl();
		void bYLpfSTqzbmDNAqtwjxMiKXZhWZ();
		void fTBEAByJwjLkLpKgbSjcKsXIYgl();
		void eKhNbdhfFtRehUCGTDMicbTsxJD();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}


#include "shares.h"
#include "company_base.h"
#include "core/enum_type.hpp"

uint64_t SharesCalculateSharesPrice(CompanyEconomyEntry *Company);

/* Source Start */
uint64_t SharesCalculateSharesPrice(CompanyEconomyEntry *Company) {
	return Company->income / Company->expenses;
}

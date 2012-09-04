/*
	Copyright 2009-2012, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * SOAPUtil.h
 *
 *  Created on: Sep 23, 2009
 *      Author: sumeet
 */

#ifndef SOAPUTIL_H_
#define SOAPUTIL_H_
#include "SOAPRequest.h"
#include "SOAPResponse.h"
#include "HttpRequest.h"

class SOAPUtil {
public:
	SOAPUtil();
	virtual ~SOAPUtil();
	SOAPRequest getSOAPRequest(HttpRequest);
	SOAPResponse invoke(SOAPRequest);
};

#endif /* SOAPUTIL_H_ */
